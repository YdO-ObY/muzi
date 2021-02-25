package CH03;

import java.util.*;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A, B, C ;
		
		A = sc.nextInt();		//고정비용
		B = sc.nextInt();		//가변비용
		C = sc.nextInt();		//총수입
		
	
		System.out.println(cal(A,B,C));
	}
	//A+ xB < xC
	//A < x(C-B)
	//A/ (C-B) < x 일경우의 x값 도출
	//시간 때문에 반복문 사용 불가;
	public static int cal(int A,int B, int C) {
		if(C<=B) {
			return -1;
		}
		
		int n = A / (C-B);
		
		if(n == A/(C-B))
			return ++n;
		else
			return n;
	}
}






