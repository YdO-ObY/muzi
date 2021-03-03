import java.io.*;
import java.util.*;

public class Main{
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		ArrayList<Integer> D = new ArrayList<>();
		
		int tc = sc.nextInt();		//TestCase Size
	
		
		while(tc-- > 0) {
			String cmd2 = sc.next();	//Command 
			if("push_front".equals(cmd2)){	
				int num = sc.nextInt();
				D.add(0, num);
			}else if("push_back".equals(cmd2)){
				int num = sc.nextInt();
				D.add(num);
			}else if("pop_front".equals(cmd2)){
				if(D.isEmpty()) 
					bw.write("-1\n");
				else {
					bw.write(D.get(0).toString()+"\n");
					D.remove(0);
				}
			}else if("pop_back".equals(cmd2)) {
				if(D.isEmpty()) 
					bw.write("-1\n");
				else {
					bw.write(D.get(D.size()-1).toString()+"\n");
					D.remove(D.size()-1);
				}
			}else if("size".equals(cmd2)){
				bw.write(D.size()+"\n");
			}else if("empty".equals(cmd2)){
				if(D.isEmpty())
					bw.write("1 \n");
				else
					bw.write("0 \n");
			}else if("front".equals(cmd2)){
				if(D.isEmpty())
					bw.write("-1\n");
				else
					bw.write(D.get(0)+"\n");
			}else if("back".equals(cmd2)){
				if(D.isEmpty())
					bw.write("-1\n");
				else
					bw.write(D.get(D.size()-1)+"\n");
			}
		}
		bw.flush();
	}
}



