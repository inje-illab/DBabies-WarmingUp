package prac1;
import java.util.Scanner;
//교재 4장 7번 문제

class Day{
	private String work;//하루의 할 일을 나타내는 문자열
	
	public Day() {this.work =" ";}
	
	public void set(String work) {this.work = work;}
	
	public String get() {return this.work;}
	
	public void show() {
		if(work == null) {
			System.out.println("없습니다.");
		}
		else {
			System.out.println(work + "입니다.");
		}
	}
}

class Month_Schedule{
	Scanner scan = new Scanner(System.in);
	private Day [] D; 
	
	public Month_Schedule(int day) {
		D = new Day[day+1];
		for(int i =0; i<day+1; i++) {
			 D[i] = new Day();
		}
	}
	
	public void input() {
		System.out.print("날짜(1~30)? ");
		int num_date = scan.nextInt();
		
		System.out.print("할 일(빈칸없이 입력)? ");
		D[num_date].set(scan.next());
		
		System.out.println("\n");
	}
	
	public void view() {
		System.out.print("날짜(1~30)? ");
		int num_date = scan.nextInt();
		
		System.out.print(num_date + "일의 할 일은 ");
		D[num_date].show();
	}
	
	public void finish(){
		System.out.print("프로그램을 종료합니다.");
	}
	
	public void  run() {
		System.out.println("이번 달 스케쥴 관리 프로그램.");
		int num =0;
		while(true) {
			System.out.print("할 일 (입력:1, 보기:2, 끝내기:3) >>");
			num = scan.nextInt();
			
			switch(num) {
			case 1:
				input();
				break;
			case 2:
				view();
				break;
				
			case 3:
				finish();
				return;	
			}
		}
	}
}

public class prac4_7 {
 public static void main(String args[]) {
	Month_Schedule april= new Month_Schedule(30);
	 
	april.run();
 }
}
