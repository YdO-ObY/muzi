using System;
using System.Text;

namespace Baekjoon
{
    class Program
    {
        public static int[] arr;
        static int N, M;
        static StringBuilder sb = new StringBuilder();

        static void Main()
        {
            string input = Console.ReadLine();

            string[] value = input.Split();

            //조건1
            N = int.Parse(value[0]);

            //조건2
            M = int.Parse(value[1]);

            //숫자 배열
            arr = new int[M];

            DFS(0);
            //한번에 쌓아놓고 출력
            Console.WriteLine(sb.ToString());
        }

        static void DFS(int dep)
        {
            if (dep == M)
            {
                //StringBuilder sb = new StringBuilder();
                for (int i = 0; i < arr.Length; i++)
                {
                    sb.Append(arr[i] + " ");
                }
                //Console.WriteLine(sb.ToString());
                
                return;
            }

            for (int i = 0; i < N; i++)
            {
                arr[dep] = i + 1;
                DFS(dep + 1);
            }
        }
    }
}

/*
    DFS 사용 해보자 
    깊이우선 탐색(Depth-First Search)
    N개의 숫자에서 M개를 뽑아 나열 하는 개수

    N 받기 

    M 받기 [1][2]~[M] Array[M] M개의 깊이 존재

    15649에서 중복 체크 제거

    한줄씩 출력 해야하는 문제인줄 알고
    출력할떄마다 초기화(36),WriteLine(40)방식으로 한줄한줄 출력
    1초만에 절대로 안풀리는데 어떤식으로 풀어야하나 하루 고민끝에
    아직은 시간을 줄이기엔 지식이 부족하고 생각이 없다 판단하여
    백준 질문글에 글을 써봄

    그냥 Builder에 한번에 쌓아두고 그냥 일렬로 출력해도 정답;

    너무 허탈하고연~

*/





