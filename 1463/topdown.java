import java.io.*;
import java.util.*;

public class Main {
	//전역변수 선언
	public static int D[];

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());
		D = new int[num + 1];

		System.out.println(fun(num));
	}

	public static int fun(int num) {
		if (num == 1) {
			return 0;
		}
		if(	D[num] >0) {
			return D[num];		//메모제이션 사용하는부분
		}
		D[num] = fun(num-1)+1;	//D[N-1]
		if(num%3 ==0) {
			D[num] = Math.min(D[num], fun(num/3)+1);	//D[N/3]
		}if(num%2==0) {
			D[num] = Math.min(D[num], fun(num/2)+1);	//D[N/2]
		}
		return D[num];
	}
}