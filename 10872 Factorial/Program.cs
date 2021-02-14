using System;

namespace Baekjoon
{
    class Program
    {
        //결과값
        static int result = 1;

        static void Main()
        {
            //숫자 입력
            string input = Console.ReadLine();
            int N = int.Parse(input);


            //재귀 함수 실행
            Factorial(N);

            Console.WriteLine(result);
        }

        static int Factorial(int N)
        {
            if (N > 0)
                result = N * Factorial(N - 1);
            //0! = 1이다
            else
                result *= 1;

            return result;
        }
    }
}

/*
    10872 뒤늦은 재귀 공부!
    0! = 1이다 라는거 감안하여
    재귀함수 내부에서 0일때 체크
 
*/





