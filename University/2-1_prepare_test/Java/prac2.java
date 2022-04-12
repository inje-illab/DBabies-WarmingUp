package prac1;
import java.util.Scanner;
import java.util.InputMismatchException;

// try catch 연습
public class prac2 {
	public static void main(String[] args) {
		try {
			Scanner scan  = new Scanner(System.in);
			System.out.print("곱하고자 하는 두 수 입력  >>");
			
			int num = scan.nextInt();
			int num2 = scan.nextInt();
			
			System.out.println(num + " * " + num2 + " = " + num * num2);
			
			scan.close();
		}
		catch(InputMismatchException e) {
			System.out.print("정수를 입력하세요.");
		}
	}
}

