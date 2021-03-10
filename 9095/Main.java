import java.io.*;
import java.util.*;

public class Main {
	public static int D[];

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int num = sc.nextInt();
		D = new int[12];
		/*
		 * 점화식 세우기 D[1] = 0 D[2] = 1; D[3] = 3;
		 * N>7 경우에만 해당 D[N] = D[N-1] + D[N-2] + D[N-3] 겨우구함 맞지는 모름 1~6까진 독립적인 경우가 발생함
		 * => 이상하게 생각하고 짜고잇엇음
		 * 그냥 N>=2 부터 가능함 점화식 짜는데 중요한건 D[0]이 뭘로 시작하냐 인듯;
		 * D[0] = 1; D[1] = 1; D[2] = 2;
		 */
		D[0] = 1;
		D[1] = 1;
		D[2] = 2;
		for (int x = 3; x <= 11; x++) {
			D[x] = D[x - 1] + D[x - 2] + D[x - 3];
		}

		while (num-- > 0) {
			int count = sc.nextInt();
			bw.write(D[count] + "\n");
		}
		bw.flush();

	}
}