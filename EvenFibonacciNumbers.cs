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
            int sum = 0;
            int first_term = 1;
            int second_term = 2;
            if (second_term == 2)
            {
                sum += 2;
            }
            int third_term = first_term + second_term;
            Console.Write(first_term + " " + second_term + " ");
            while (third_term<4000000)
            {
                third_term = first_term + second_term;
                first_term = second_term;
                second_term = third_term;
                if (third_term < 4000000)
                {
                    Console.Write(third_term + " ");
                    if (third_term % 2 == 0)
                    {
                        sum += third_term;
                    }
                }
            }
            Console.Write("\nSum of the even Fibonacci numbers:" + sum);
        }
    }
}
