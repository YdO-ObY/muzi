import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int tc = sc.nextInt();
		
		while(tc-->0){
			int A = sc.nextInt();
			int B = sc.nextInt();
			
			bw.write(A*B/GCD(A,B)+"\n");
		}
		
		bw.flush();
	}
	

	public static int GCD(int A, int B) {
		if(B == 0) {
			return A;
		}
		else {
			int r = A%B;
			return GCD(B, r);
		}
	}
}
