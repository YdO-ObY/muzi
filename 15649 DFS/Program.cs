using System;
using System.Text;

namespace Baekjoon
{
    class Program
    {
        public static int[] arr;
        public static bool[] visit;

        static void Main()
        {
            string input = Console.ReadLine();

            string[] value = input.Split();

            //조건1
            int N = int.Parse(value[0]);

            //조건2
            int M = int.Parse(value[1]);

            //숫자 배열
            arr = new int[M];

            //방문 기록
            visit = new bool[N];

            DFS(N, M, 0);

        }

        static void DFS(int N, int M, int dep)
        {
            StringBuilder sb = new StringBuilder();
            if(dep == M)
            {
                for(int i = 0; i<arr.Length; i++)
                {
                    sb.Append(arr[i] + " ");
                }
                Console.WriteLine(sb.ToString());
                return;
            }

            for(int i =0; i< N; i++)
            {
                if (!visit[i])
                {
                    visit[i] = true;
                    arr[dep] = i + 1;
                    DFS(N, M, dep + 1);
                    visit[i] = false;
                }
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

    현재 M의 깊이에서 숫자 N이 들어간적 잇나 없나 체크 => visit[]


    출력 Console.Write사용으로 인한 시간 초과 발생
    해결방안
    StringBuilder사용
    String은 변경 불가 개체 => 반복 할때마다 새 문자열 생성(공간 할당) => 오버헤드 발생 
    
   문자열을 이용하여 Loop를 하고싶을땐 String보단 StringBuilder를 사용하여 출력하자! 


*/





