using System;
using System.ComponentModel.DataAnnotations;
using System.Runtime.InteropServices;
using System.Threading.Tasks.Dataflow;

namespace CSharp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int remainder;
            var value = 0;
            for (int i = 0; i <= 999; i++)
            {
                if (i % 3 == 0)
                {
                    value += i;
                }
                else if (i % 5 == 0)
                {
                    value += i;
                }
            }
            Console.WriteLine(value);
        }
    }
}
