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
        int vazios = 4;
        int ocupados = 0;
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
                            ocupados--;
                            vazios++;
                            pictureBox2.Image = sensorDePresenca.Properties.Resources.vermelho;
                            pictureBox2.Tag = "0";
                            atualizaCountLeitos();
                        }
                        return;
                    }

                    if (Convert.ToDouble(s) < Convert.ToInt32(comboBox2.SelectedItem))
                    {
                        if (pictureBox2.Tag.ToString() == "0")
                        {
                            ocupados++;
                            vazios--;
                            pictureBox2.Image = sensorDePresenca.Properties.Resources.verde;
                            pictureBox2.Tag = "1";
                        }
                    }
                    else
                    {
                        if (pictureBox2.Tag.ToString() == "1")
                        {
                            ocupados--;
                            vazios++;
                            pictureBox2.Image = sensorDePresenca.Properties.Resources.vermelho;
                            pictureBox2.Tag = "0";
                        }
                    }

                    tbArduino.AppendText(s + "\n");
                    atualizaCountLeitos();

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

        private void enviaGraylog(float vazios, float ocupados)
        {
            string s = @"{""version"":""1.1"",""host"":""ArduinoUS93"",""short_message"":""sensor de presenca""," + @"""_vazios"":" + vazios.ToString() + @",""_ocupados"":" + ocupados.ToString() + "}";
            client.SendMessageAsync("US93", new[] { new KafkaNet.Protocol.Message(s) });
        }

        private void pictureBox3_Click(object sender, EventArgs e)
        {
            if (((PictureBox)sender).Tag.ToString() == "0")
            {
                ((PictureBox)sender).Image = sensorDePresenca.Properties.Resources.verde;
                ((PictureBox)sender).Tag = 1;
                ocupados++;
                vazios--;
            }

            else
            {
                ((PictureBox)sender).Image = sensorDePresenca.Properties.Resources.vermelho;
                ((PictureBox)sender).Tag = 0;
                ocupados--;
                vazios++;
            }
            atualizaCountLeitos();
        }

        private void atualizaCountLeitos()
        {
            label9.Text = "Vazios: " + vazios.ToString();
            label10.Text = "Ocupados: " + ocupados.ToString();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            tbGraylog.AppendText(DateTime.Now.ToShortTimeString() + ": " + vazios.ToString() + " V    " + ocupados.ToString() + " O\n");
            enviaGraylog(vazios, ocupados);
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

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            if (serialPort.IsOpen)
            {
                try
                {
                    serialPort.Close();
                }
                catch (Exception)
                {

                    throw;
                }
            }
        }
    }
}
