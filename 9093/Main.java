import java.util.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int i = Integer.parseInt(bf.readLine());	//input TestCase number 
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		while(i > 0) {
			Stack<Character> stack = new Stack<>();
			String s = bf.readLine() +"\n"; //input TestCase
			for(char ch : s.toCharArray()) {
				if(ch == ' ' || ch == '\n') {
					while(!stack.isEmpty()) {
						bw.write(stack.pop());
					}
					bw.write(ch);
				}else {
					stack.push(ch);
				}
			}
			i--;
		}
		bw.flush();
	}
}
