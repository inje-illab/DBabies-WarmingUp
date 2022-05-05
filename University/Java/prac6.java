package prac1;
import java.util.Scanner;
public class prac6 {
	
public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);
	
	System.out.print("몇 개?>>");
	int num = scan.nextInt();
	
	int arr[] = new int[num];
	
	for(int i =0; i < num; i++) {//배열 초기화  
		arr[i] = 0;
	}
	
	boolean check = false;
	
	for(int i = 0; i < num; i++) {
		while(true){
			int ran_num = (int)(Math.random()*100)+1;
			
			for(int j = 0; j< num; j++) {
				if(arr[j] == ran_num) {
					check = true;
					break;
				}
			}
			if(check == true) {
				check = false;
				continue;
			}
			else {
				arr[i] = ran_num;
				break;
			}
		}
	}
	
	for(int i =0; i <num; i++) {		
		if(i%10 ==0) {
			System.out.println();
		}
		System.out.print(arr[i] + " ");
	}
	
	scan.close();
	}
}
