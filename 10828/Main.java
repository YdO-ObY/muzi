import java.util.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
       BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
       int num = sc.nextInt();			//반복 횟수
       int[] stack = new int[num];		//최대 배열 = num
       int size = 0;					//처음 크기 = 0 
       
       while(num > 0) {
       	String code = sc.next();
       	if(code.equals("push")) {
       		int innum = sc.nextInt();
       		stack[size] = innum;
       		size++;
       	}else if(code.equals("pop")) {
       		if(size == 0)
       			bw.write(-1+"\n");
       		else {
       			bw.write(stack[size-1]+"\n");
       			size--;
       		}
       	}else if(code.equals("size")) {
       		bw.write(size+"\n");
       	}else if(code.equals("empty")) {
       		if(size == 0) {
       			bw.write(1+"\n");
       		}else {
       			bw.write(0+"\n");
       		}
       	}else {
       		if(size == 0)
       			bw.write(-1+"\n");
       		else {
       			bw.write(stack[size-1]+"\n");
       		}
       	}
               	
       	num--;
       }
       bw.flush();
       
       
	}
}
