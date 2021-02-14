using System;

namespace Baekjoon
{
    class Program
    {
        //결과값
        static int result = 0;

        static void Main()
        {
            //숫자 입력
            string input = Console.ReadLine();
            int N = int.Parse(input);


            //재귀 함수 실행
            Fibonacci(N);

            Console.WriteLine(result);
        }

        static int Fibonacci(int N)
        {
            if (N == 0)
                return result = 0;
            else if (N == 1)
                return result = 1;

            result = Fibonacci(N-1) + Fibonacci(N - 2);

            return result;
           
        }
    }
}

/*
    10870 뒤늦은 재귀 공부!
    재귀문제가 생각보다 단순해서 좋네.. 괜히 쫄앗나
    아니면 뒤에 백트래킹문제를 풀다 와서 그런가;;
    생각보단 머리가 이게 어떻게 작동하는지는 돌아가는듯 ㅋㅋ
*/





