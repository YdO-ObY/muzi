using System;

namespace Baekjoon
{
    class Program
    {
        static void Main()
        {
            //테스트 갯수
            int num = int.Parse(Console.ReadLine());
            string[] result = new string[num];


            for(int i =0; i<num; i++)
            {
                //문자열 입력
                string input = Console.ReadLine();

                //학생수 , 시험점수
                string[] value = input.Split();

                //첫 숫자는 학생 수
                int std = int.Parse(value[0]);
                //평균 이상 학생 수 
                int stdup = 0;
                //학생 수 만큼의 점수 배열             
                double[] exam = new double[std];
                //총합 , 평균
                double sum = 0 , avg;

                //학생 총합 구하는 loop
                for (int j =0 ; j < std; j++)
                {

                    exam[j] = double.Parse(value[j+1]);
                    sum += exam[j];
                }

                avg = sum / std;

                //학생 평균 이상 % 구하기
                for (int j = 0; j < std; j++)
                {
                    if (avg < exam[j])
                        stdup++;

                }

                result[i] = String.Format("{0:F3}", ((double)stdup/(double)std )*100);

                Console.WriteLine(result[i] + "%");

            }
        }
    }
}


/*
    입력 받을 테스트 수
    loop 첫 입력 숫자 = 학생 수 , 나머지 = 점수
    학생 숫자만큼 loop
    점수 총합 loop
    평균값 넘는 학생 loop
*/
