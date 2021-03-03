import java.util.*;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		Queue<Integer> Q = new LinkedList<>();
		
		
		int tc = sc.nextInt();
		
		for(int x =1; x<=tc; x++) {
			Q.add(x);
		}
		
		while(Q.size() != 1) {
			Q.poll();
			Q.add(Q.poll());
		}
		System.out.println(Q.peek());
	}
}