import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Queue<Integer> Q = new LinkedList<>();
		PriorityQueue<Integer> Q2 = new PriorityQueue<>(Collections.reverseOrder());

		int tc = sc.nextInt();

		while (tc-- > 0) {
			int sum = sc.nextInt(); // Queue size
			int num = sc.nextInt(); // search number
			int y = 1;

			while (sum > Q.size()) {
				int c = sc.nextInt();
				Q.add(c);
				Q2.add(c);
			}
			
			while (!Q.isEmpty()) {
				int x = Q.poll();
				int x2 = Q2.peek();
				if (Q.size() == 0) {
					bw.write(y+"\n");
					break;
				} else {
					if (num != 0) {
						if (x != Q2.peek()) {
							Q.add(x);
							num--;
						}else {
							y++;
							Q2.poll();
							num--;
						}
					}else {
						if (x != Q2.peek()) {
							Q.add(x);
							num = Q.size()-1;
						}else {
							bw.write(y+"\n");
							break;
						}
					}
				}
			}
			
			while(!Q.isEmpty())
				Q.poll();
			while(!Q2.isEmpty())
				Q2.poll();
			
		}

		bw.flush();

	}
}