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
            string output = "You can go to bed at:\n";
            int i = 0;
            int numberOfHours, numberOfMinutes;
            input = textBox.Text;
            inputs = (input.Split(':'));
            numberOfHours = Convert.ToInt32(inputs[0]);
            numberOfMinutes = Convert.ToInt32(inputs[1]);
            for (i = 0; i < 6; i++)
            {
                numberOfHours -= 1;
                numberOfMinutes -= 30;
                if (numberOfMinutes < 0)
                {
                    numberOfHours--;
                    numberOfMinutes = 60 + numberOfMinutes;

                }
                if (numberOfHours > 24) numberOfHours %= 24;
                if (numberOfHours < 0) numberOfHours = 24 + numberOfHours;

                if (numberOfMinutes >= 10) output += Convert.ToString(numberOfHours) + ':' + Convert.ToString(numberOfMinutes) + '\n';
                else output += Convert.ToString(numberOfHours) + ':' + Convert.ToString(numberOfMinutes) + "0\n";
            }
            MessageBox.Show(output, "SleepyTeller Answer", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            DateTime now = DateTime.Now;
            int i = 1;
            int hour, minute;
            hour = now.Hour;
            minute = now.Minute;
            int[,] hours = new int[7,2];
            string output = "You can wake up at:\n";

            for (i = 0; i < 6; i++)
            {
                hour += 1;
                minute += 30;
                if (minute >= 60)
                {
                    hour++;
                    minute %= 60;

                }
                if (hour > 24) hour %= 24;

                if (minute >= 10) output += Convert.ToString(hour) + ':' + Convert.ToString(minute) + '\n';
                else output += Convert.ToString(hour) + ':' + Convert.ToString(minute) + "0\n";
            }

            MessageBox.Show(output, "SleepyTeller Answer", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);
        }
    }
}
