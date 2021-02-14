package CH08;

import java.util.*;
import java.io.*;

//No.9012
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int i = sc.nextInt();
		
		
		while(i > 0) {
			String s = sc.next();
			int l = s.length();
			int stack = 0;
			
			for(int j= 0; j<l; j++) {
								
				if(s.charAt(j) == '(') {
					stack+=1;
				}else {
					stack-=1;
				}
				if(stack < 0) 
					break;
				
			}
			if(stack == 0)
				System.out.println("YES");
			else 
				System.out.println("NO");
			
				i--;
		}
		
	}
}
