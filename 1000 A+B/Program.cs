using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            string num = Console.ReadLine();
            string[] s = num.Split();


            int A = Int32.Parse(s[0]);
            int B = Int32.Parse(s[1]);

            Console.Write(A + B);



        }
    }
}
