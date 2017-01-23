using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CS3260_Lab01B_CBAXTER
{
    class Program
    {
        static void Main(string[] args)
        {
            System.Console.WriteLine("int {0} | {1}", int.MinValue, int.MaxValue);
            System.Console.WriteLine("char [{0}] | {1}", char.MinValue, char.MaxValue);
            System.Console.WriteLine("float {0} | {1}", float.MinValue, float.MaxValue);
            System.Console.WriteLine("bool {0} | {1}", bool.TrueString, bool.FalseString);
            System.Console.WriteLine("decimal {0} | {1}", decimal.MinValue, decimal.MaxValue);

            Console.ReadLine();
        }
    }
}
