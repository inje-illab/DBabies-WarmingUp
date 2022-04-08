package prac1;

//class 사용 연습  

class circle{
	private int radius;
	
	public circle(int radius) {
		this.radius = radius;
	}
	
	public double getarea() {
		return 3.14 * radius * radius;
	}
}

public class prac3 {
	public static void main(String args[]) {
		circle cir [] = new circle[5];
		
		for(int i=0; i< cir.length; i++) {
			cir[i] = new circle(i);
		}
		
		for(int i =0; i < cir.length; i++) {
			System.out.println(cir[i].getarea());
		}
	}
}
 