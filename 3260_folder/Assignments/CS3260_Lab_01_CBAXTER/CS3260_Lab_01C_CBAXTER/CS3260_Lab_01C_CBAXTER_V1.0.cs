using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CS3260_Lab01C_CBAXTER
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
           
     
            string myString1 = "int:\nmin:" + int.MinValue + "\nmax: " + int.MaxValue;
            string myString2 = "\nchar:\nmin: " + char.MinValue.ToString() + "\nmax: " + char.MaxValue.ToString();
            string myString3 = "\nfloat:\nmin: " + float.MinValue + "\nmax: " + float.MaxValue;
            string myString4 = "\nbool:\nmin: " + bool.FalseString + "\nmax: " + bool.TrueString;
            string myString5 = "\ndecimal:\nmin: " + decimal.MinValue + "\nmax: " + decimal.MaxValue;

            string allStrings = myString1 + myString3 + myString4 + myString5 + myString2;

            richTextBox1.Text = allStrings;
           

        }
    }
}
