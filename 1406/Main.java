import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		String txt = sc.next();
	
			
		Stack<Character> L = new Stack<>();
		Stack<Character> R = new Stack<>();
		
		for(char x : txt.toCharArray()) {
			L.push(x);
		}
		int tc = sc.nextInt();		//input TestCase size
		
		while(tc > 0) {
			String c = sc.next();		//input command
			if(c.equals("P")) {
				char s = sc.next().charAt(0);	//add char
				L.push(s);
			}
			else if(c.equals("L")) {	// Left move cursor
				if(!L.isEmpty())
					R.push(L.pop());
			}
			else if(c.equals("D")) {	// Right move cursor
				if(!R.isEmpty())
					L.push(R.pop());
			}
			else if(c.equals("B")) {	//remove Left text
				if(!L.isEmpty()) {
					L.pop();
				}
			}
			tc--;
		}
		while(!L.isEmpty()) {
			R.push(L.pop());
		}
		
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		while(!R.isEmpty()) {
			bw.write(R.pop());
		}
		
		
		bw.flush();
		
	}
}




