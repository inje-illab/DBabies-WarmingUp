package prac1;
import java.util.Scanner;

class seat{//자리 정보가 있는 클래스
	private String S_class[];
	private String A_class[];
	private String B_class[];
	
	public seat() {//자리 정보를 담을 배열 동적 선언 후 초기화
		S_class = new String[10];
		A_class = new String[10];
		B_class = new String[10];
		
		for(int i =0; i <10; i++) {
			S_class[i] = "___";
			A_class[i] = "___";
			B_class[i] = "___";
			
		}
	}
	
	public void set_seat(String[] seat_class,String str, int num) { //예약자가 원하는 자리에 예약
		seat_class[num-1] = str;
	}
	
	public String[] get_S() {
		return S_class;
	}
	
	public String[] get_A() {
		return A_class;
	}
	
	public String[] get_B() {
		return B_class;
	}
	
	public void All_print() {//모든 자리 정보 출력  
		for(int i =0; i < 10; i++) {
			System.out.print(S_class[i] + " ");
		}
		
		System.out.println();
		for(int i =0; i < 10; i++) {
			System.out.print(A_class[i] + " ");
		}
		
		System.out.println();
		for(int i =0; i < 10; i++) {
			System.out.print(B_class[i] + " ");
		}
		System.out.println("\n조회를 완료하였습니다.");
	}
}


class run{ //예약 시스템을 실행 시켜주는 클래스
	Scanner scan = new Scanner(System.in);
	
	private seat st;	//좌석 정보가 담겨 있는 클래스 선언  
	private int num;
	
	public run() {
		st = new seat(); //클래스 변수 동적 할당 
		this.num = 0;
	}
	
	public int get_seat() {//자리 선택하는 함수  
		System.out.print("좌석 구분:S(1), A(2), B(3)");
		num = scan.nextInt();
		
		return num;
	}
	
	public void del_seat(String[] str, String name) { //자리 예약을 취소해주는 함수 
		for(int i =0; i < 10; i++) {
			if(str[i].equals(name)) {//예약을 취소하고자 하는 이름과 같다면 이름을 없앤다. 
				str[i] = "___";
				break;
			}
		}
	}
	
	public void Print_seat(String[] x) { //원하는 등급의 좌석 정보를 출력해주는 함수  
		for(int i =0; i< 10; i++) {
			System.out.print(x[i]+ " ");
		}
		System.out.println();
	}
	
	
	
	public void set_reser() {	// 실질적인 프로그햄  
		while(true) {//사용자가 종료를 원할 때까지 무한 반복한다.  
			System.out.print("예약:1, 조회:2, 취소:3, 끝내기:4>>");
			this.num = scan.nextInt();
			
			String tmp_name;
			int tmp_num;
			
			switch(num) {
			case 1://자리를 예약을 하는 경우
				switch(get_seat()) {
				case 1://S클래스 자리 
					Print_seat(st.get_S()); //현재 좌석 상태를 출력
					System.out.print("이름>>>");
					tmp_name = scan.next();
					System.out.print("번호>>>");
					tmp_num = scan.nextInt();
					
					st.set_seat(st.get_S(),tmp_name,tmp_num); //자리 예약을 해준다.  
					
					break;
					
				case 2://A클래스 자리 
					Print_seat(st.get_A()); //현재 좌석 상태를 출력
					System.out.print("이름>>>");
					tmp_name = scan.next();
					System.out.print("번호>>>");
					tmp_num = scan.nextInt();
					
					st.set_seat(st.get_A(),tmp_name,tmp_num);
					break;
					
				case 3://B클래스 자리 
					Print_seat(st.get_B()); //현재 좌석 상태를 출력
					System.out.print("이름>>>");
					tmp_name = scan.next();
					System.out.print("번호>>>");
					tmp_num = scan.nextInt();
					
					st.set_seat(st.get_B(),tmp_name,tmp_num);
					break;
				}
				
				break;
				
			case 2: //조회 - 모든좌석의 예약 정보가 나온다. 
				st.All_print();
				
				break;
				
			case 3://예약한 자리를 취소한다.
				switch(get_seat()) {
				case 1://S
					Print_seat(st.get_S()); //취소하고자하는 등급의 자리 정보 출력  
					System.out.print("이름>>");
					tmp_name = scan.next();
					del_seat(st.get_S(), tmp_name); //취소하고자하는 이름을 삭제  
					break;
					
				case 2://A
					Print_seat(st.get_A());
					System.out.print("이름>>");
					tmp_name = scan.next();
					del_seat(st.get_A(), tmp_name);
					break;
					
				case 3://B
					Print_seat(st.get_B());
					System.out.print("이름>>");
					tmp_name = scan.next();
					del_seat(st.get_B(), tmp_name);
					break;
				}
				
				break;
				
			case 4://프로그램 종료
				scan.close();
				return;
			}
		}
	}
}

public class prac5 {
	public static void main(String arg[]) {
		run R = new run();
		R.set_reser();
	}
}