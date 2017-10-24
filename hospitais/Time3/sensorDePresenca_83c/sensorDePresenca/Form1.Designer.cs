namespace sensorDePresenca
{
    partial class Form1
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.gbSerial = new System.Windows.Forms.GroupBox();
            this.button1 = new System.Windows.Forms.Button();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.gbPresenca = new System.Windows.Forms.GroupBox();
            this.label10 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.label5 = new System.Windows.Forms.Label();
            this.pictureBox5 = new System.Windows.Forms.PictureBox();
            this.pictureBox3 = new System.Windows.Forms.PictureBox();
            this.pictureBox4 = new System.Windows.Forms.PictureBox();
            this.label7 = new System.Windows.Forms.Label();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.label6 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.gbMensagens = new System.Windows.Forms.GroupBox();
            this.tbArduino = new System.Windows.Forms.TextBox();
            this.gbGraylog = new System.Windows.Forms.GroupBox();
            this.tbGraylog = new System.Windows.Forms.TextBox();
            this.serialPort1 = new System.IO.Ports.SerialPort(this.components);
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.label4 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label12 = new System.Windows.Forms.Label();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.timer2 = new System.Windows.Forms.Timer(this.components);
            this.gbSerial.SuspendLayout();
            this.gbPresenca.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            this.gbMensagens.SuspendLayout();
            this.gbGraylog.SuspendLayout();
            this.SuspendLayout();
            // 
            // gbSerial
            // 
            this.gbSerial.Controls.Add(this.button1);
            this.gbSerial.Controls.Add(this.comboBox1);
            this.gbSerial.Controls.Add(this.label1);
            this.gbSerial.Location = new System.Drawing.Point(12, 12);
            this.gbSerial.Name = "gbSerial";
            this.gbSerial.Size = new System.Drawing.Size(292, 100);
            this.gbSerial.TabIndex = 0;
            this.gbSerial.TabStop = false;
            this.gbSerial.Text = "Serial Sensor";
            // 
            // button1
            // 
            this.button1.Enabled = false;
            this.button1.Location = new System.Drawing.Point(211, 44);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 24);
            this.button1.TabIndex = 6;
            this.button1.Text = "Abrir";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // comboBox1
            // 
            this.comboBox1.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(93, 44);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(112, 24);
            this.comboBox1.TabIndex = 5;
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            this.comboBox1.Click += new System.EventHandler(this.comboBox1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 47);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(81, 17);
            this.label1.TabIndex = 2;
            this.label1.Text = "Porta COM:";
            // 
            // gbPresenca
            // 
            this.gbPresenca.Controls.Add(this.checkBox1);
            this.gbPresenca.Controls.Add(this.label4);
            this.gbPresenca.Controls.Add(this.label8);
            this.gbPresenca.Controls.Add(this.label11);
            this.gbPresenca.Controls.Add(this.label12);
            this.gbPresenca.Controls.Add(this.label10);
            this.gbPresenca.Controls.Add(this.label9);
            this.gbPresenca.Controls.Add(this.comboBox2);
            this.gbPresenca.Controls.Add(this.label5);
            this.gbPresenca.Controls.Add(this.pictureBox5);
            this.gbPresenca.Controls.Add(this.pictureBox3);
            this.gbPresenca.Controls.Add(this.pictureBox4);
            this.gbPresenca.Controls.Add(this.label7);
            this.gbPresenca.Controls.Add(this.pictureBox2);
            this.gbPresenca.Controls.Add(this.label6);
            this.gbPresenca.Controls.Add(this.label3);
            this.gbPresenca.Controls.Add(this.label2);
            this.gbPresenca.Location = new System.Drawing.Point(12, 118);
            this.gbPresenca.Name = "gbPresenca";
            this.gbPresenca.Size = new System.Drawing.Size(292, 242);
            this.gbPresenca.TabIndex = 1;
            this.gbPresenca.TabStop = false;
            this.gbPresenca.Text = "Presença";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(9, 219);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(89, 17);
            this.label10.TabIndex = 14;
            this.label10.Text = "Ocupados: 0";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(9, 188);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(66, 17);
            this.label9.TabIndex = 13;
            this.label9.Text = "Vazios: 4";
            // 
            // comboBox2
            // 
            this.comboBox2.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Items.AddRange(new object[] {
            "5",
            "6",
            "7",
            "8",
            "9",
            "10",
            "11",
            "12",
            "13",
            "14",
            "15",
            "16",
            "17",
            "18",
            "19",
            "20"});
            this.comboBox2.Location = new System.Drawing.Point(6, 46);
            this.comboBox2.Name = "comboBox2";
            this.comboBox2.Size = new System.Drawing.Size(129, 24);
            this.comboBox2.TabIndex = 11;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(6, 24);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(165, 17);
            this.label5.TabIndex = 9;
            this.label5.Text = "Presença abaixo de (cm)";
            // 
            // pictureBox5
            // 
            this.pictureBox5.Image = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox5.InitialImage = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox5.Location = new System.Drawing.Point(237, 135);
            this.pictureBox5.Name = "pictureBox5";
            this.pictureBox5.Size = new System.Drawing.Size(40, 40);
            this.pictureBox5.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox5.TabIndex = 10;
            this.pictureBox5.TabStop = false;
            this.pictureBox5.Tag = "0";
            this.pictureBox5.Click += new System.EventHandler(this.pictureBox3_Click);
            // 
            // pictureBox3
            // 
            this.pictureBox3.ErrorImage = null;
            this.pictureBox3.Image = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox3.InitialImage = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox3.Location = new System.Drawing.Point(90, 135);
            this.pictureBox3.Name = "pictureBox3";
            this.pictureBox3.Size = new System.Drawing.Size(40, 40);
            this.pictureBox3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox3.TabIndex = 10;
            this.pictureBox3.TabStop = false;
            this.pictureBox3.Tag = "0";
            this.pictureBox3.Click += new System.EventHandler(this.pictureBox3_Click);
            // 
            // pictureBox4
            // 
            this.pictureBox4.Image = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox4.InitialImage = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox4.Location = new System.Drawing.Point(165, 135);
            this.pictureBox4.Name = "pictureBox4";
            this.pictureBox4.Size = new System.Drawing.Size(40, 40);
            this.pictureBox4.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox4.TabIndex = 9;
            this.pictureBox4.TabStop = false;
            this.pictureBox4.Tag = "0";
            this.pictureBox4.Click += new System.EventHandler(this.pictureBox3_Click);
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(218, 107);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(76, 17);
            this.label7.TabIndex = 4;
            this.label7.Text = "(Simulado)";
            // 
            // pictureBox2
            // 
            this.pictureBox2.ErrorImage = null;
            this.pictureBox2.Image = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox2.InitialImage = global::sensorDePresenca.Properties.Resources.vermelho;
            this.pictureBox2.Location = new System.Drawing.Point(18, 135);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(40, 40);
            this.pictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox2.TabIndex = 9;
            this.pictureBox2.TabStop = false;
            this.pictureBox2.Tag = "0";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(147, 107);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(76, 17);
            this.label6.TabIndex = 3;
            this.label6.Text = "(Simulado)";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(70, 107);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(76, 17);
            this.label3.TabIndex = 4;
            this.label3.Text = "(Simulado)";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(8, 107);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(63, 17);
            this.label2.TabIndex = 3;
            this.label2.Text = "(Sensor)";
            // 
            // gbMensagens
            // 
            this.gbMensagens.Controls.Add(this.tbArduino);
            this.gbMensagens.Location = new System.Drawing.Point(12, 366);
            this.gbMensagens.Name = "gbMensagens";
            this.gbMensagens.Size = new System.Drawing.Size(292, 100);
            this.gbMensagens.TabIndex = 2;
            this.gbMensagens.TabStop = false;
            this.gbMensagens.Text = "Mensagens Arduino";
            // 
            // tbArduino
            // 
            this.tbArduino.BackColor = System.Drawing.SystemColors.MenuText;
            this.tbArduino.ForeColor = System.Drawing.SystemColors.Menu;
            this.tbArduino.Location = new System.Drawing.Point(6, 21);
            this.tbArduino.Multiline = true;
            this.tbArduino.Name = "tbArduino";
            this.tbArduino.Size = new System.Drawing.Size(280, 73);
            this.tbArduino.TabIndex = 0;
            // 
            // gbGraylog
            // 
            this.gbGraylog.Controls.Add(this.tbGraylog);
            this.gbGraylog.Location = new System.Drawing.Point(12, 472);
            this.gbGraylog.Name = "gbGraylog";
            this.gbGraylog.Size = new System.Drawing.Size(292, 100);
            this.gbGraylog.TabIndex = 3;
            this.gbGraylog.TabStop = false;
            this.gbGraylog.Text = "Mensagens Graylog";
            // 
            // tbGraylog
            // 
            this.tbGraylog.BackColor = System.Drawing.SystemColors.MenuText;
            this.tbGraylog.ForeColor = System.Drawing.SystemColors.MenuBar;
            this.tbGraylog.Location = new System.Drawing.Point(6, 21);
            this.tbGraylog.Multiline = true;
            this.tbGraylog.Name = "tbGraylog";
            this.tbGraylog.Size = new System.Drawing.Size(280, 73);
            this.tbGraylog.TabIndex = 1;
            // 
            // serialPort1
            // 
            this.serialPort1.DataReceived += new System.IO.Ports.SerialDataReceivedEventHandler(this.serialPort1_DataReceived);
            // 
            // timer1
            // 
            this.timer1.Interval = 60000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(232, 86);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(51, 17);
            this.label4.TabIndex = 17;
            this.label4.Text = "Leito 4";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(162, 86);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(51, 17);
            this.label8.TabIndex = 15;
            this.label8.Text = "Leito 3";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(85, 86);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(51, 17);
            this.label11.TabIndex = 18;
            this.label11.Text = "Leito 2";
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Location = new System.Drawing.Point(15, 86);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(51, 17);
            this.label12.TabIndex = 16;
            this.label12.Text = "Leito 1";
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Checked = true;
            this.checkBox1.CheckState = System.Windows.Forms.CheckState.Checked;
            this.checkBox1.Location = new System.Drawing.Point(224, 215);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(59, 21);
            this.checkBox1.TabIndex = 4;
            this.checkBox1.Text = "Auto";
            this.checkBox1.UseVisualStyleBackColor = true;
            this.checkBox1.CheckedChanged += new System.EventHandler(this.timer2_Tick);
            // 
            // timer2
            // 
            this.timer2.Interval = 60000;
            this.timer2.Tick += new System.EventHandler(this.timer2_Tick);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(320, 593);
            this.Controls.Add(this.gbGraylog);
            this.Controls.Add(this.gbMensagens);
            this.Controls.Add(this.gbPresenca);
            this.Controls.Add(this.gbSerial);
            this.Name = "Form1";
            this.Text = "Form1";
            this.gbSerial.ResumeLayout(false);
            this.gbSerial.PerformLayout();
            this.gbPresenca.ResumeLayout(false);
            this.gbPresenca.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            this.gbMensagens.ResumeLayout(false);
            this.gbMensagens.PerformLayout();
            this.gbGraylog.ResumeLayout(false);
            this.gbGraylog.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox gbSerial;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.GroupBox gbPresenca;
        private System.Windows.Forms.GroupBox gbMensagens;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.PictureBox pictureBox3;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox tbArduino;
        private System.Windows.Forms.GroupBox gbGraylog;
        private System.Windows.Forms.TextBox tbGraylog;
        private System.IO.Ports.SerialPort serialPort1;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.PictureBox pictureBox5;
        private System.Windows.Forms.PictureBox pictureBox4;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.Timer timer2;
    }
}

