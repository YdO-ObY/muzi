import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int A = sc.nextInt();
		int B = sc.nextInt();		
		int result = 0;
		result = GCD(A,B);
		System.out.println(result+ "\n" +(A*B/result));
	}

	public static int GCD(int a, int b) {
		if(b == 0) {
			return a;
		}
		else {
			int r = a % b;
			return GCD(b,r);
		}
	}
}
