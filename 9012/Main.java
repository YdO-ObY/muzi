package CH08;

import java.util.*;
import java.io.*;

//No.9012
public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int i = Integer.parseInt(br.readLine());		//input TestCase Size
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		while(i-- > 0) {
			Stack<Character> s = new Stack<>();
			String tc = br.readLine();  //TestCase
			
			for(char ch : tc.toCharArray()) {
				if(ch == '(') {
					s.push(ch);
				}
				else {
					if(s.isEmpty()){
						s.push(ch);
						break;
					}
					else {
						s.pop();
					}
				}
			}
			if(s.isEmpty())
				bw.write("YES \n");
			else 
				bw.write("NO \n");
		}
		
		bw.flush();
		bw.close();		
	}
}
