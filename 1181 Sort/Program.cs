using System;
using System.Linq;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            //테스트 개수입력
            int num = int.Parse(Console.ReadLine());
            string[] word = new string[num];


            for (int i = 0; i < num; i++)
            {
                word[i] = Console.ReadLine();

                //Array.Sort(word, (x, y) => x.Length.CompareTo(y.Length));  
            }

            Array.Sort(word, (a, b) =>
            {
                if (a.Length < b.Length) //조건1
                    return -1;  //앞값 앞으로
                else if (a.Length > b.Length) //조건1
                    return 1;   //뒷값 앞으로
                else //a.Length == b.Length
                    return string.Compare(a, b); //조건2
            });

            //조건3
            word = word.Distinct().ToArray();


            for (int i = 0; i < word.Length; i++)
                Console.WriteLine(word[i]);
           
        }
    }
}

/*
    조건
    조건.1 글자 길이 순 정렬 Sort
    조건.2 글자 순 정렬     Sort
    조건.3 중복제거        System.Linq > Distinct()

    CompareTo
    (-1, 0 ,1)
*/



