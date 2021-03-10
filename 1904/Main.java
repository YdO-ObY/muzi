import java.util.*;

public class Main {
	public static int D[]; // Memorization

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		D = new int[num+1];
		// D[N] = 1,00으로 만들 수 있는 경우의 수
		// n = ㅁㅁㅁㅁㅁㅁㅁ1 -> n-1가지
		// n = ㅁㅁㅁㅁㅁㅁ00 -> n-2가지
		// D[N] = D[N-1] +D[N-2]
		// D[0] = 1; D[1]=1; 
		D[0]= 1; D[1]=1;
		for(int x = 2; x<=num; x++) {
			D[x] = (D[x-2]+ D[x-1])%15746;
		}
		System.out.println(D[num]);

	}
}