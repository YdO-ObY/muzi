import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Queue<Integer> Q = new LinkedList<>();

		int tc = sc.nextInt(); // testcase
		int end = sc.nextInt(); // repeat
		int start = 0;
		for (int x = 1; x <= tc; x++) {
			Q.add(x);
		}

		bw.write("<");
		while (Q.size() != 0) {
			start++;
			if (start == end) {
				bw.write(Q.poll()+"");
				start = 0;
				if (!Q.isEmpty()) {
					bw.write(", ");
				}
			} else {
				Q.add(Q.poll());
			}
		}
		bw.write(">");

		bw.flush();
	}
}