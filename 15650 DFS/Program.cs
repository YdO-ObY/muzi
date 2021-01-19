using System;
using System.Text;

namespace Baekjoon
{
    class Program
    {
        public static int[] arr;

        public static int N, M;

        static void Main()
        {
            string input = Console.ReadLine();

            string[] value = input.Split();

            //조건1
            N = int.Parse(value[0]);

            //조건2
            M = int.Parse(value[1]);

            arr = new int[M];

            DFS(1, 0);

        }

        //param(현재 위치 , 깊이)
        static void DFS(int at, int dep)
        {
            StringBuilder sb = new StringBuilder();
            //깊이가 같을때 출력
            if(dep == M)
            {
                for(int i = 0; i<arr.Length; i++)
                {
                    sb.Append(arr[i] + " ");
                }
                Console.WriteLine(sb.ToString());
                return;
            }

            for(int i = at; i<= N; i++)
            {
                arr[dep] = i;
                DFS(i + 1, dep + 1);
            }
        }
    }
}

/*
    DFS 사용 해보자
    깊이우선 탐색(Depth-First Search)
    N개의 숫자에서 M개를 뽑아 나열 하는 경우 (중복제거)

    N 받기 

    M 받기 [1][2]~[M] Array[M] M개의 깊이 존재

    15649처럼 방문 햇는지 안햇는지 찾을필요없음




*/





