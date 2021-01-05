using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            //테스트 케이스수 
            string t = Console.ReadLine();
            //좌표 + 거리
            string[] p = new string[int.Parse(t)];

            for(int i=0; i < int.Parse(t) ; i++)
            {
                p[i] = Console.ReadLine();
            }

            for(int j = 0; j<int.Parse(t); j++)
            {
                string[] num = p[j].Split();
                double x1 = double.Parse(num[0]);
                double y1 = double.Parse(num[1]);
                double r1 = double.Parse(num[2]);
                double x2 = double.Parse(num[3]);
                double y2 = double.Parse(num[4]);
                double r2 = double.Parse(num[5]);

                //두 반지름의 합과 차 
                double rm = Math.Pow(r1 - r2, 2);
                double rp = Math.Pow(r1 + r2, 2);

                //두 원점의 거리
                double xy = Math.Pow(x2 - x1,2) + Math.Pow(y2 - y1 , 2);

                if(rm < xy && xy < rp)
                {               
                    Console.WriteLine(2);
                }
                else if ((rp == xy) || (rm == xy && xy != 0) )
                {
                    //내접 외접
                    Console.WriteLine(1);
                }
                else if(rp < xy || xy > rm)
                {
                    Console.WriteLine(0);
                }
                else
                {
                    if(r1 == r2)
                        Console.WriteLine(-1);
                    else
                        Console.WriteLine(0);
                }

            }
        }
    }
}
