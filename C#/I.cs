using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1 {

    class Punkt
    {
        int x;
        int y;

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

        public int get_x() { return x; }

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
