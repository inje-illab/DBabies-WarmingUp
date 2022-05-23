package prac1;
import java.util.Scanner;

interface Stack{
	int length();//현재 스택에 저장된 개수 리턴 
	int capacity();//스택의 전체 저장 가능한 개수리턴 
	String pop(); //스택의top에 실수 저장 
	boolean push(String val);//스택의 top에 저장된 실수 리턴 
}

class StackApp implements Stack{
	private int size,top;
	private String str[];
	
	StackApp(int size){
		this.size = size;
		top = 0;
		str = new String [this.size+1];
	}
	
	@Override
	public int length() {
		return size -top;
	}
	@Override
	public int capacity() {
		return size;
	}
	@Override
	public String pop() {
		return str[top--];
	}
	@Override
	public boolean push(String val) {
		if(top <= size) {
			str[++top] = val;
			return true;
		}
		else return false;
	}
}

public class Chapter5_9 {
	static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("총 스택 저장 공간의 크기 입력 >> ");
		int num  = scanner.nextInt();
		
		StackApp stackapp = new StackApp(num);
		
		while(true){
			System.out.print("문자열 입력>> ");
			String str = scanner.next();
			if(str =="그만 ") {
				System.out.print("스택에 저장된 모든 문자열 팝 :");
				for(int i = 0; i < stackapp.length(); i++) {
					stackapp.pop();
				}
				break;
			}
			else {			
				if(stackapp.push(str)){
					continue;
				}
				else {
					System.out.println("스택이 꽉 차서 푸시 불가!");
					continue;					
				}
			}
		}
		scanner.close();
	}
}
