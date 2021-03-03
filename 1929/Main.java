import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int M = sc.nextInt();
		int N = sc.nextInt();
		while(M<=N) {
			if(fun(M)==0)
				bw.write(M+"\n");
			M++;
		}
		bw.flush();
	}

	public static int fun(int num) {
		if(num < 2)
			return -1;
		else {
			for(int x =2; x*x <=num; x++) {
				if(num%x == 0)
					return -1;
			}
			return 0;
		}
	}
}