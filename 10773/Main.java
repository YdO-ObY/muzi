import java.io.*;
import java.util.*;

public class Main{
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		Stack<Integer> st = new Stack<>();
		int sum = 0;
		
		int tc = sc.nextInt();
		
		
		while(tc-- >0) {
			int input = sc.nextInt();
			if(input != 0) 
				st.push(input);
			else {
				if(!st.isEmpty())
					st.pop();
			}	
		}
		
		for(int x : st) {
			sum +=x;
		}
		
		System.out.println(sum);
	}
}



