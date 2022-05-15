package prac1;

//자바 22년 2

public class prac7 {

	public static void main(String[] args) {
		int arr[] = {50000,10000,1000,500,100,10,1};
		int get_money[] = new int[8];
		
		int money = 12345;
		
		for(int i =0; i<arr.length; i++) {
			get_money[i] = money/arr[i];
			money %= arr[i];
		}
		
		for(int i = 0; i<get_money.length;i++) {
			System.out.println(get_money[i]);
		}
}
}