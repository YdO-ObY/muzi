import java.io.*;
import java.util.*;

public class Main {
	public static long D[]; // Memorization

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int num = sc.nextInt();
		D = new long[101];
		while (num-- > 0) {
			int count = sc.nextInt();
			// 점화식 세우기
			// N > 4
			// D[N] = D[N-1] +D[N-4]
			D[1] = 1;
			D[2] = 1;
			D[3] = 1;
			D[4] =2;
			D[5] =2;
			for (int x = 6; x <= count; x++) {
				if (D[x] == 0)
					D[x] = D[x - 1] + D[x - 5];
			}
			bw.write(D[count]+"\n");
		}
		bw.flush();
	}
}