import java.io.*;
import java.util.*;

public class Main{
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int K = sc.nextInt();		//인원수
		int N =  sc.nextInt();		//제거 차례
		Queue<Integer> Q = new LinkedList<>();
	
		bw.write("<");
			
		for(int i= 1; i<= K; i++) {
			Q.add(i);
		}
		
		
		for(int r = 0; !Q.isEmpty(); r++) {
			if((r+1)%N == 0) {
				bw.write(Q.poll().toString());
				if(!Q.isEmpty())
					bw.write(", ");
			}else {
				Q.add(Q.poll());
			}
		}
		bw.write(">");
		bw.flush();
	}
}
