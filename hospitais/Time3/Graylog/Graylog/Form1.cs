using KafkaNet;
using KafkaNet.Model;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Graylog
{
    public partial class Form1 : Form
    {
        KafkaOptions options;
        BrokerRouter router;
        KafkaNet.Producer client;
        List<Topico> Topicos = new List<Topico>();
        List<Thread> threads = new List<Thread>();
        private Object thisLock = new Object();

        public Form1()
        {
            InitializeComponent();

            //Inicializa Cliente Kafka
            options = new KafkaOptions(new Uri("http://stampsnet.hashtagsource.com:9092"));
            router = new BrokerRouter(options);
            client = new KafkaNet.Producer(router);

            //Le arquivo de entrada;
            leArquivoDeEntradas();

            iniciaThreads();
        }

        private void enviaGraylog(string nome, string s)
        {
            lock (thisLock)
            {
                client.SendMessageAsync(nome, new[] { new KafkaNet.Protocol.Message(s) });
            }
        }

        private void leArquivoDeEntradas()
        {
            try
            {
                List<string> listaDeEntradas = new List<string>();

                //Le o arquivo de entrada
                String path = System.AppDomain.CurrentDomain.BaseDirectory.ToString();
                Stream entrada = File.Open(path + "entrada.txt", FileMode.Open);
                StreamReader leitor = new StreamReader(entrada);
                string linha = leitor.ReadLine();
                while (linha != null)
                {
                    linha = leitor.ReadLine();
                    if (linha == null)
                        break;
                    else if (String.IsNullOrEmpty(linha))
                        continue;
                    listaDeEntradas.Add(linha);
                }
                leitor.Close();
                entrada.Close();

                //cria os objetos de topicos
                foreach (var item in listaDeEntradas)
                {
                    Topicos.Add(new Topico(item));
                }
                int contaTopico = 1;
                foreach (var item in Topicos)
                {
                    adicionaTopicoInterface((50 * (contaTopico - 1)) + contaTopico * 2, item);
                    contaTopico++;
                }
            }
            catch (Exception)
            {
                MessageBox.Show("Erro ao ler aruivo de entradas!");
                Close();
            }
        }


        private void iniciaThreads()
        {
            foreach (var item in Topicos)
            {
                System.Windows.Forms.Timer timer = new System.Windows.Forms.Timer();
                timer.Interval = item.tempo * 1000;
                timer.Tag = item;
                timer.Tick += new EventHandler(timer_Tick);
                timer.Start();
            }
        }

        void timer_Tick(object sender, EventArgs e)
        {
            Topico t = (Topico)((System.Windows.Forms.Timer)sender).Tag;
            t.randomizaVariaveis();
            string json = montaJSON(t);
            enviaGraylog(t.nome, json);
            t.lastMessage = DateTime.Now;

            var thread = new Thread(() => atualizaPainel(t));
            thread.Start();
        }

        private string montaJSON(Topico t)
        {
            int count = 0;
            string s = @"{""version"":""1.1"", ""host"":""" + t.host + @""", ""short_message"":""" + t.shortMessage + @""",";
            foreach (var item in t.variaveis)
            {
                count++;
                s = s + @"""" + item.Key + @""":" + item.Value.ToString();
                if (count < t.variaveis.Count)
                    s = s + ",";
            }
            s = s + "}";
            return s;
        }


        private void adicionaTopicoInterface(int top, Topico t)
        {
            Panel p = new Panel();
            p.Parent = panel1;
            p.Width = 203;
            p.Height = 50;
            p.Top = top;
            p.Left = 5;
            p.BackColor = Color.LightBlue;

            Label l = new Label();
            l.Parent = p;
            l.Top = 3;
            l.Width = 180;
            l.Font = new Font("Arial", 12, FontStyle.Regular);
            l.Text = t.nome;

            Label l2 = new Label();
            l2.Parent = p;
            l2.Top = 30;
            l2.Width = 180;
            l2.Font = new Font("Arial", 8, FontStyle.Regular);
            l2.Text = "Last message: 00:00:00";
            l2.Name = "labelHora";
            t.painel = p;


        }

        private void atualizaPainel(Topico t)
        {
            this.Invoke(new MethodInvoker(() =>
            {
                foreach (Control item in t.painel.Controls)
                {
                    if (item.Name == "labelHora")
                        item.Text = "Last message: " + t.lastMessage.ToString("HH:mm:ss");
                }
                t.painel.BackColor = Color.Green;
                t.painel.Refresh();
                Thread.Sleep(150);
                t.painel.BackColor = Color.LightBlue;
            }));

        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }
    }
}
