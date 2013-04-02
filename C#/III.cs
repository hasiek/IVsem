using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SleepPhase1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string input;
            string[] inputs;
            int numberOfHours, numberOfMinutes;
            input = textBox.Text;
            inputs = (input.Split(':'));
            numberOfHours = Convert.ToInt32(inputs[0]);
            numberOfMinutes = Convert.ToInt32(inputs[1]);
            DateTime hour = new DateTime(2013, 12, 12, numberOfHours, numberOfMinutes, 0);
            MessageBox.Show(hour.Hour.ToString() + ':' + hour.Minute.ToString());
            
        }
    }
}
