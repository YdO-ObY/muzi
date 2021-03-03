package CH03;

import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Scanner sc = new Scanner(System.in);
		Stack<Character> stack = new Stack<>();

		while (true) {
			String tc = sc.nextLine();
			if (tc.charAt(0) == '.') {
				break;
			} else {
				for (char ch : tc.toCharArray()) {
					if (ch == '(' || ch == '[')
						stack.push(ch);
					else if (ch == ')') {
						if(!stack.isEmpty() && stack.peek() == '(')
							stack.pop();
						else
							stack.push(ch);
					}
					else if(ch ==']') {
						if(!stack.isEmpty() && stack.peek() == '[')
							stack.pop();
						else
							stack.push(ch);
					}
				}
				if(stack.isEmpty())
					bw.write("yes\n");
				else
					bw.write("no\n");
				
				while(!stack.isEmpty())
					stack.pop();
			}
		}
		bw.flush();
	}
}
