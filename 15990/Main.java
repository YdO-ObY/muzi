import java.io.*;
import java.util.*;

public class Main {
	public static long[][] D = new long[100001][4];
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int tc = sc.nextInt();
		
		D[1][1]=1;D[2][2]=1;D[3][3]=1;
		D[3][2]=1;
		D[3][1]=1;
		
		for(int x =4; x<=100000; x++) {
			if(x>=1) {
				D[x][1] = (D[x-1][2]+D[x-1][3])%1000000009;
			}
			if(x>=2) {
				D[x][2] = (D[x-2][1]+D[x-2][3])%1000000009;
			}
			if(x>=3) {
				D[x][3] = (D[x-3][1]+D[x-3][2])%1000000009;
			}
		}
		
		
		while(tc-->0) {
			int result = sc.nextInt();
			
			bw.write((D[result][1]+D[result][2]+D[result][3])%1000000009+"\n");
		}
		bw.flush();
		
	
	}
}