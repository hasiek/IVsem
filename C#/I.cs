using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1 {

    class Punkt
    {
        public int x { get; set; }
        public int y { get; set; }

        public Punkt() 
        {

            x = 0;
            y = 0;

        }
        public Punkt(int x, int y)
        {

            this.x = x;
            this.y = y;

        }

        ~Punkt(){}
     
    };

    class Program {

        static void Main(string[] args) {

            Punkt punkt = new Punkt(32,23);
            Console.WriteLine(punkt.get_x());
            Console.ReadLine();

        }
    }
}
