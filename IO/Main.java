import java.util.*;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

//buffer 사용법
public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); //input
		String s = br.readLine(); 					//String			
		int i = Integer.parseInt(br.readLine()); 	//Int - 형변환을 해야하므로 예외처리 필요  try.. catch or Exception처리
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));	//output
		
		
		bw.write(s);		
		bw.newLine();
		bw.flush();
		bw.close();
	}
}
