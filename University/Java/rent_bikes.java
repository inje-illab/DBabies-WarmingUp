package prac1;
import java.util.Scanner;


class Electric_bikes{
	protected String name;
	protected String ID;
	protected String Password;

	public Electric_bikes() {//로그인할 사용자 정보는 미리 저장 
		this.name ="김철수";
		this.ID = "123";
		this.Password = "123";
	}	
};

class App extends Electric_bikes{//로그인 
	App() {super();}
	
	public boolean log_in(String user_ID, String user_Password) {
		//입력 받은 아이디와 비밀번호가 같다면 true 아니면 false
		if(this.ID.equals(user_ID) && this.Password.equals(user_Password)) {
			return true;
		}
		else {return false;}
	}
	
	public String get_name() {
		return this.name;
	}
	
}

class User extends Electric_bikes{//빌리기 || 반납하기 
	protected int inventory;
	
	User(){super(); this.inventory = 1000;}
	
	public void Rent(int rent_num) {
		this.inventory -= rent_num;
	}
	
	public void Return(int return_num) {
		this.inventory += return_num;
	}
	
}

class Manager extends User{ //재고 관리 
	//새로운 장비 추가 총 수량 증가 
	
	public void Manager_add_inventory(int add_num) {
		inventory += add_num;
	}
	
	public void Manager_sub_inventory(int sub_num) {
		inventory -= sub_num;
	}
	
}

class Run{//실행시켜주는 클래스 
	private App app;
	private Manager manager;
	
	Run(){
		app = new App();
		manager = new Manager();
	}
	
	public void start() {
		try (Scanner scan = new Scanner(System.in)) {
			System.out.println("사용자의 아이디와 비밀번호를 입력하세요 ");
			
			while(true) { //로그인이 될 때까지 시도 
				String get_name = scan.next();
				String get_password = scan.next();
				
				if(app.log_in(get_name, get_password)) {
					System.out.println(app.get_name()+ "님 환영합니다~~~");
					break;
				}
				else {
					System.out.println("로그인 실패입니다");
				}
			}
			
			boolean check = false; //대여를 한 적이 있는지 체크 
			while(true){
				System.out.println("어떤 기능을 이용하겠습니까\n (1)대여하기\t(2)반납하기\t(3)메니저 모드\t(4)종료 ");
				int num = scan.nextInt();
				
				switch(num) {
				case 1://대여하기 
					check = true;
					while(true) {
						System.out.println("몇 대를 대여하시겠습니까? 잔여 자전거 수: " + manager.inventory+"대 입니다.");
						int rent_num= scan.nextInt();
						if(manager.inventory == 0) {
							System.out.println("재고가 없어 대여가 불가능합니다. 반납을 해주세요!!");
							break;
						}
						if(manager.inventory - rent_num <0) {
							System.out.println("재고가 없어 그 수량은 대여 불가능합니다. 다시 입력해 주세요 ");
							continue;
						}
						else {
							System.out.println("대여에 성공하셨습니다!!");
							manager.Rent(rent_num);
							break;
						}
					}
					
					break;				
					
				case 2://반납하기 
					if(!check) {
						System.out.println("대여를 해야 반납을 할 수 있습니다. ");
					}
					
					else {
						System.out.println("몇 대를 반납하시겠습니까? ");
						int REturn_num = scan.nextInt();
						manager.Return(REturn_num);
						System.out.println("반납에 성공했습니다. 잔여 자전거 수: " +manager.inventory + "대 입니다. ");
					}
					
					
					break;
					
				case 3: //매니저모드 
					System.out.println("매니저 모드 입니다.\n 재고를 수정할 수 있습니다\n(1)추가\t(2)빼기 ");
					int manage_num = scan.nextInt();
					
					if(manage_num == 1) {//추가 
						System.out.println("몇 대를 추가하시겠습니까? ");
						int add_num = scan.nextInt();
						manager.Manager_add_inventory(add_num);						
						System.out.println("재고에 "+ add_num + "대를 추가했습니다.\n현재 잔여 자전수 수 : "+manager.inventory + "대 입니다. ");
						
					}
					else {
						System.out.println("몇 대를 빼시겠습니까? ");
						int sub_num = scan.nextInt();
						manager.Manager_sub_inventory(sub_num);						
						System.out.println("재고에 "+ sub_num + "대를 뺐습니다.\n현재 잔여 자전수 수 : "+manager.inventory + "대 입니다. ");					
						
					}
					
					break;
					
				case 4://종료 
					System.out.print("프로그램을 종료합니다.");
					return;
					
				default:
					System.out.println("숫자를 다시 입력해주세요.");
					break;
				}
			}
		}
			
		}
	
	
}


public class ddd {
public static void main(String[] arg) {
		Run run = new Run();
		run.start();		
	}
}
