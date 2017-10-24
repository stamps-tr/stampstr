using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.IO.Ports;
using KafkaNet;
using KafkaNet.Model;
using KafkaNet.Protocol;

namespace sensorDePresenca
{
    public partial class Form1 : Form
    {
        SerialPort serialPort = new SerialPort();
        int c1, c2, c3, c4 = 0;
        KafkaOptions options;
        BrokerRouter router;
        KafkaNet.Producer client;
        Random random = new Random((int)DateTime.Now.Ticks & 0x0000FFFF);

        public Form1()
        {
            InitializeComponent();

            options = new KafkaOptions(new Uri("http://stampsnet.hashtagsource.com:9092"));
            router = new BrokerRouter(options);
            client = new KafkaNet.Producer(router);
            string[] ports = SerialPort.GetPortNames();
            foreach (string port in ports)
            {
                comboBox1.Items.Add(port);
            }
            comboBox2.SelectedIndex = 10;
            timer1.Start();
            timer2.Start();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (button1.Text == "Abrir")
            {
                if (comboBox1.SelectedItem != null)
                {
                    button1.Enabled = true;
                    serialPort1.PortName = comboBox1.SelectedItem.ToString();
                }
            }

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (button1.Text == "Abrir")
            {
                serialPort1.Open();
                button1.Text = "Fechar";
            }
            else
            {
                serialPort1.Close();
                button1.Text = "Abrir";
            }
        }

        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            string s = serialPort1.ReadLine();
            this.Invoke(new MethodInvoker(() =>
            {
                s = s.Trim().Replace(".", ",");
                try
                {
                    if (Convert.ToDouble(s) > 25)
                    {
                        tbArduino.AppendText("Distancia Acima de 25cm\n");
                        if (pictureBox2.Tag.ToString() == "1")
                        {
                            c1 = 0;
                            pictureBox2.Image = sensorDePresenca.Properties.Resources.vermelho;
                            pictureBox2.Tag = "0";
                        }
                        return;
                    }

                    if (Convert.ToDouble(s) < Convert.ToInt32(comboBox2.SelectedItem))
                    {
                        if (pictureBox2.Tag.ToString() == "0")
                        {
                            c1 = 1;
                            pictureBox2.Image = sensorDePresenca.Properties.Resources.verde;
                            pictureBox2.Tag = "1";
                        }
                    }
                    else
                    {
                        if (pictureBox2.Tag.ToString() == "1")
                        {
                            c1 = 0;
                            pictureBox2.Image = sensorDePresenca.Properties.Resources.vermelho;
                            pictureBox2.Tag = "0";
                        }
                    }

                    tbArduino.AppendText(s + "\n");

                }
                catch (Exception)
                {

                    tbArduino.AppendText("valor inválido" + "\n");
                }
            }));
        }

        private void comboBox1_Click(object sender, EventArgs e)
        {
            comboBox1.Items.Clear();
            string[] ports = SerialPort.GetPortNames();
            foreach (string port in ports)
            {
                comboBox1.Items.Add(port);
            }
        }

        private void enviaGraylog(int _c1, int _c2, int _c3, int _c4)
        {
            string s = @"{""version"":""1.1"",""host"":""ArduinoUS83a"",""short_message"":""sensor de presenca 83a""," + @"""_corredor1"":" + _c1.ToString() +","+ @"""_corredor2"":" + _c2.ToString() +"," + @"""_corredor3"":" + _c3.ToString() + "," + @"""_corredor4"":" + _c4.ToString() + "}";
            client.SendMessageAsync("US83a", new[] { new KafkaNet.Protocol.Message(s) });
        }

        private void pictureBox3_Click(object sender, EventArgs e)
        {
            if (((PictureBox)sender).Tag.ToString() == "0")
            {
                ((PictureBox)sender).Image = sensorDePresenca.Properties.Resources.verde;
                ((PictureBox)sender).Tag = 1;

                char c = ((PictureBox)sender).Name[10];
                int corredor = Convert.ToInt32(c.ToString());
                corredor--;
                switch (corredor)
                {
                    case 2:
                        c2 = 1;
                        break;
                    case 3:
                        c3 = 1;
                        break;
                    case 4:
                        c4 = 1;
                        break;
                }
            }

            else
            {
                ((PictureBox)sender).Image = sensorDePresenca.Properties.Resources.vermelho;
                ((PictureBox)sender).Tag = 0;

                char c = ((PictureBox)sender).Name[10];
                int corredor = Convert.ToInt32(c.ToString());
                corredor--;
                switch (corredor)
                {
                    case 2:
                        c2 = 0;
                        break;
                    case 3:
                        c3 = 0;
                        break;
                    case 4:
                        c4 = 0;
                        break;
                }
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            string s = " c1="+ c1.ToString() +" c2=" + c2.ToString() + " c3=" + c3.ToString() + " c4=" + c4.ToString();
            tbGraylog.AppendText(DateTime.Now.ToShortTimeString() + ": " +s+ "\n");
            enviaGraylog(c1,c2,c3,c4);
        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                this.Invoke(new MethodInvoker(() =>
                {
                    if (random.Next(1, 50) <= 25)
                        pictureBox3_Click(pictureBox3, e);
                    if (random.Next(1, 50) <= 25)
                        pictureBox3_Click(pictureBox4, e);
                    if (random.Next(1, 50) <= 25)
                        pictureBox3_Click(pictureBox5, e);
                }));
            }
        }
    }
}
