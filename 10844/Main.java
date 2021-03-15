import java.io.*;
import java.util.*;

public class Main {
	public static long[][] D = new long[101][10];

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int tc = sc.nextInt();
		for (int x = 1; x <= 9; x++)
			D[1][x] = 1;
		D[2][0] = 1;
		for (int x = 2; x <= 100; x++) {
			for (int i = 0; i <= 9; i++) {
				if (i == 0)
					D[x][i] = D[x - 1][i + 1];
				else if (i == 9) {
					D[x][i] = (D[x - 1][i - 1]) % 1000000000;
				} else {
					D[x][i] = (D[x - 1][i - 1] + D[x - 1][i + 1]) % 1000000000;
				}
			}
		}

		bw.write((D[tc][1] + D[tc][2] + D[tc][3] + D[tc][4] + D[tc][5] + D[tc][6] + D[tc][7] + D[tc][8] + D[tc][9]
				+ D[tc][0]) % 1000000000 + "\n");
		bw.flush();

	}
}