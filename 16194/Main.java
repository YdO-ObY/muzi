import java.util.*;

public class Main {
	public static int D[]; // Memorization
	public static int P[];
	
	
	//점화식
	//D[N]= D[N-i] +P[i]
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		D = new int[num+1];	// n-p개의 카드를 구매한 가격
		P = new int[num+1];	// n개가 들어있는 카드팩 구매
		
		for(int i =1; i<=num;i++) {
			P[i] = sc.nextInt();
		}
		
		for(int x =1; x<=num; x++) {
			for(int y =1; y<=x; y++)
				D[x] = Math.max(D[x], D[x-y]+P[y]);
		}
		
		System.out.println(D[num]);
	}
}