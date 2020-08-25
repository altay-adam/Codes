using System;
using System.ComponentModel.DataAnnotations;
using System.Data;
using System.Runtime.InteropServices;
using System.Threading.Tasks.Dataflow;

namespace CSharp1
{
    class Program
    {
        static void Main(string[] args)      
        {
			int divisorCounter = 0;
			int Value = 0;
			int number = 1;
			int temp;  //It's temporary variable. I'm gonna equal it the number temporarily.
			while (true)
			{
				Value += number;
				temp = number;
				number = 1;
				while (number <= Value)
				{
					if (Value % number == 0)
					{
						divisorCounter++;
					}
					number++;
				}
				number = temp;
				if (divisorCounter > 500)
				{
					Console.Write(Value); break;
				}
				number++;
				divisorCounter = 0;
			}
		}
    }
}
