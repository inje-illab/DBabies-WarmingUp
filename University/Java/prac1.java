package prac1;
import java.util.Scanner;
//3장 8번 난이도 7

public class prac1 {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		
		System.out.println("정수 몇개?");
		int num = scan.nextInt();
		
		boolean check  = false;
		int cnt =0;
		int arr[] = new int [num];
		
		while(cnt < num) {			
			int tmp = (int)(Math.random()*100 +1);
			
			for(int j =0; j < arr.length; j++) {
				if(tmp == arr[j]) {
					check = true;
					break;
				}
			}
			
			if(!check) {
				arr[cnt] = tmp;
				cnt++;
				System.out.print(tmp + " ");
				if(cnt % 10 == 0) {
					System.out.print("\n");
				}
			}
			check = false;
		}
		
		scan.close();
	}
}
