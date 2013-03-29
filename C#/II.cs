using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {

            DateTime now = DateTime.Now;
            DateTime firstOption = now.AddHours(6.5);
            DateTime secondOption = now.AddHours(8);
            DateTime thirdOption = now.AddHours(9.5);

            Console.WriteLine("Oh, so you want to go to bed? Great idea!");
            Console.Write("You should wake up at " + firstOption.ToShortTimeString());
            Console.Write(" or " + secondOption.ToShortTimeString());
            Console.WriteLine(" or " + thirdOption.ToShortTimeString() + '.');
            Console.Read();
        }
    }
}
