import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int max = sc.nextInt(); // 최대 숫자
		int chk = sc.nextInt(); // 몇번쨰로 사라진 숫자 가져올지 입력

		boolean[] full = new boolean[max + 1]; // 입력받은 max만큼 배열 만듬 1만큼 큰 이유는 배열은 0부터 시작하므로 숫자 편하게 계산하기 위해 1을 더해줌
		int[] prime = new int[max]; // 소수를 넣는 배열
		int inprime = 0; // 소수 개수
		int outnum = 0; // 버려진 숫자 개수
		for (int x = 2; x <= max; x++) {
			if (full[x] == false) {
				prime[inprime] = x;
				outnum++;
				if (outnum == chk) {
					System.out.println(x);
					break;
				}
				for (int y = x * x; y <= max; y += x) {
					if (full[y] == false) {
						full[y] = true;
						outnum++;
						if (outnum == chk) {
							System.out.println(y);
							break;
						}
					}
				}
				inprime++;
			}
		}

	}
}

// 17298
// public class Main {
// public static void main(String[] args) throws IOException {
// Scanner sc = new Scanner(System.in);
// BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
// Stack<Integer> st = new Stack<>();
//
// int tc = sc.nextInt();
// int[] arr = new int[tc];
//
// for(int i = 0; i< arr.length; i++) {
// int s = sc.nextInt();
// arr[i] = s;
// }
//
// for(int x = 0; x < arr.length; x++) {
// if(arr[x] >= arr[x+1]) {
// bw.write("-1 ");
// }
// else {
// for(int y =0; y< arr.length-1; x++) {
//
// }
// }
// }
//
// }
// }
