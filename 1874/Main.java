import java.util.*;
public class Main {
	public static void main(String[] args)  {
		Scanner sc = new Scanner(System.in);
		
		int tc = sc.nextInt();	//TestCase size
		int[] a = new int[tc];	//TestCase
		int n = 0;				//
		
		StringBuilder sb = new StringBuilder();
		
		
		Stack<Integer> stack = new Stack<>();
		
		for(int i = 0; i< a.length; i++) {
			a[i] = sc.nextInt();
		}
		
		for(int i : a) {
			if(i >= n) {
				while(i>n) {
					stack.push(++n);
					sb.append("+\n");	
				}
			stack.pop();
			sb.append("-\n");
			}
			else {
				if(stack.peek() != i) {
					System.out.println("NO");
					break;
				}
				else {
					stack.pop();
					sb.append("-\n");
				}
			}
		}
		if(stack.isEmpty())
		System.out.println(sb);
			
	}
}