package CH03;

import java.util.*;

public class Main {
	//전역변수 선언
	public static int D[];

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		D = new int[num + 1];

		for(int x =2 ; x<=num; x++) {
			//D[N-1]
			D[x] = D[x-1]+1;
			//D[N/3]
			if(x%3==0 && D[x]> D[x/3]+1) {
				D[x] = D[x/3]+1;
			}
			//D[N/2]
			else if(x%2==0 && D[x]> D[x/2]+1) {
				D[x] = D[x/2]+1;
			}
		}
		System.out.println(D[num]);
	}

	
}