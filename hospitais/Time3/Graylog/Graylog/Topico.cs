using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Graylog
{


    class Topico
    {
        public string nome;
        public int tempo;
        public string host;
        public string shortMessage;
        private Dictionary<string, float> variaveisMaximas = new Dictionary<string, float>();
        public Dictionary<string, float> variaveis = new Dictionary<string, float>();
        public Panel painel;
        public DateTime lastMessage = new DateTime();

        private Random random = new Random((int)DateTime.Now.Ticks & 0x0000FFFF);


        public Topico(string s)
        {
            lastMessage = DateTime.Now;
            string[] parametros = s.Split('|');

            int count = 0;
            string ultimaVariavel = "";
            foreach (string item in parametros)
            {
                try
                {
                    switch (count)
                    {
                        case 0: nome = item; break;
                        case 1: tempo = Convert.ToInt32(item); break;
                        case 2: host = item; break;
                        case 3: shortMessage = item; break;
                        default:
                            if (count % 2 == 0) // par - variavel
                            {
                                variaveis.Add(item, 0);
                                ultimaVariavel = item;
                            }
                            else // impar - valor
                            {
                                variaveisMaximas[ultimaVariavel] = Convert.ToSingle(item.Replace(',', '.'));
                            }
                            break;
                    }
                    count++;
                }
                catch (Exception)
                {
                    MessageBox.Show("Erro ao ler linha: " + item);
                }
            }
        }

        public void randomizaVariaveis()
        {
            string s = "";
            foreach (var item in variaveisMaximas)
            {
                try
                {
                    Single valorRandomizado = Convert.ToSingle(item.Value);
                    valorRandomizado = random.Next(Convert.ToInt32(valorRandomizado + 1));

                    if (!variaveis.Keys.Contains(item.Key))
                    {
                        variaveis.Add(item.Key, valorRandomizado);
                    }
                    else
                    {
                        variaveis[item.Key] = valorRandomizado;
                    }
                    s = s + "Variavel: " + item.Key + "  Valor: " + valorRandomizado.ToString() + "\r\n";
                }
                catch (Exception)
                {
                    MessageBox.Show("Erro ao gerar valor randomizado!");
                }
            }
            //MessageBox.Show(s);
        }
    }



}
