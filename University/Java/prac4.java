package prac1;
import java.util.Scanner;

//class 연습(자바 4장 12번)

class reservate{
	private String name;
	private int seat_point;
	
	reservate(){
		name = "";
		seat_point = 0;
	}
	
	public void set_name(String name) {
		this.name = name; 
	}

	public void set_point(int seat_point) {
		this.seat_point = seat_point;
	}
	
	public String get_name() {
		return this.name;
	}
	
	public int seat_point() {
		return this.seat_point;
	}	
}

class rsvate_system{
	Scanner scan = new Scanner(System.in);
	private reservate S[] = new reservate[10]; //클래스 배열
	private reservate A[] = new reservate[10]; 
	private reservate B[] = new reservate[10]; 
	
	private String S_class[] = new String [10]; //아래는 석 정보
	private String A_class[] = new String [10];
	private String B_class[] = new String [10];
	
	rsvate_system() {
		for(int i =0; i < 10; i++) {//초기화
			S[i] = new reservate();
			A[i] = new reservate();
			B[i] = new reservate();
		}
		
		for(int i =0; i <10; i++) {
			S_class[i] = "---";
			A_class[i] = "---";
			B_class[i] = "---";
		}
	}
	
	public void run() {
		int num,seat_class,point;
		String name;
		
		System.out.println("명푼콘서트홀 예약 시스템입니다.");
		
		while(true) {
			System.out.print("예약:1,  조회:2,  최소:3  끝내기:4 >> ");
			num = scan.nextInt();
			
			switch(num) {//어떤 서비스를 이용할 건지
				case 1://예
					System.out.print("좌석구분 S(1), A(2), B(3) >>");
					seat_class = scan.nextInt();
					
					switch(seat_class) { 
						case 1://S클래스 좌석
							System.out.print("S>>");
							for(int i =0; i < 10; i++) {//좌석 예약 상태를 출
								System.out.print(" " + S_class[i]);
							}	
							System.out.println();
							
							System.out.print("이름>> ");
							name = scan.next();
							System.out.print("번호>> ");
							point = scan.nextInt();
							
							S[point-1].set_name(name); //이름 저장
							S_class[point-1] = name;
							S[point-1].set_point(point);//자리 위치 저장
							
							break;
						
						case 2: //A클래스 좌석
							System.out.print("A>>");
							for(int i =0; i < 10; i++) {//좌석 예약 상태를 출
								System.out.print(" " + A_class[i]);
							}	
							System.out.println();
							
							System.out.print("이름>> ");
							name = scan.next();
							System.out.print("번호>> ");
							point = scan.nextInt();
							
							A[point-1].set_name(name); //이름 저장
							A_class[point-1] = name;
							A[point-1].set_point(point);//자리 위치 저장
							
							break;
						
						case 3: //B클래스 좌
							System.out.print("B>>");
							for(int i =0; i < 10; i++) {//좌석 예약 상태를 출
								System.out.print(" " + S_class[i]);
							}	
							System.out.println();
							
							System.out.print("이름>> ");
							name = scan.next();
							System.out.print("번호>> ");
							point = scan.nextInt();
							
							B[point-1].set_name(name); //이름 저장
							B_class[point-1] = name;
							B[point-1].set_point(point);//자리 위치 저장
							
							break;
					}
					break;
				
			case 2: //조회 모든 자리 예약 상태를 보여준다.
				System.out.print("S>>");
				for(int i =0; i < 10; i++) {//좌석 예약 상태를 출
					System.out.print(" " + S_class[i]);
				}	
				System.out.println();
				
				System.out.print("A>>");
				for(int i =0; i < 10; i++) {//좌석 예약 상태를 출
					System.out.print(" " + A_class[i]);
				}	
				System.out.println();
				
				System.out.print("B>>");
				for(int i =0; i < 10; i++) {//좌석 예약 상태를 출
					System.out.print(" " + B_class[i]);
				}	
				System.out.print("\n조회를 완료했습니다.\n");
				
				
				break;
				
				
			case 3: //예약을 취소한다.
				System.out.print("좌석구분 S(1), A(2), B(3) >>");
				seat_class = scan.nextInt();
				
				switch(seat_class) {
				case 1:
					System.out.print("S>>");
					for(int i =0; i < 10; i++) {//좌석 예약 상태를 출
						System.out.print(" " + S_class[i]);
					}	
					System.out.print("/n이름 >> ");
					name = scan.next();
					
					for(int i=0; i< 10; i++) {
						if(S_class[i].equals(name)) {
							
						}
					}
				case 2:
				case 3:
					
				}
				
				break;
				
			case 4:
				
			}
		}
	}
}


public class prac4 {
	public static void main(String args[]) {
		rsvate_system reser = new rsvate_system();
		reser.run();
	}
}
