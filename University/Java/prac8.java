package prac1;

interface Shape{ //클래스에 상속을 할 인터페이스를 선언
	final double PI = 3.14; //원의 면적을 구하려면 파이가 필요하므로 선언
	double getArea(); //원의 면적을 반환해주는 함수
	void draw(); 
	default public void redraw() {
		System.out.print("--- 다시 그립니다.");
		draw();
	}
}

class Circle implements Shape{ //인터페이스를 상속 받아 인터페이스 안에 있는 메소드를 각 클래스의 역할에 맞에 오버라이드해준다.
	private int radis;
	
	public Circle(int radis) {
		this.radis = radis;
	}
	@Override
	public double getArea() {
		return PI * radis*radis ;
	}
	@Override
	public void draw() {
		System.out.println(" 반지름이 "+ radis+"인 원입니다.");
	}
}

class Oval implements Shape{
	private int x,y;
	
	public Oval(int x,int y) {
		this.x= x;
		this.y=y;
	}
	
	@Override
	public double getArea() {
		return PI*x*y;
	}
	
	@Override
	public void draw() {
		System.out.println(" "+x + "x"+ y+ "에 내접하는 타원입니다.");
	}
}

class Rect implements Shape{
	 private int x,y;
	 
	 public Rect(int x, int y) {
		 this.x= x;
		 this.y =y;
	 }
	 
	 @Override
	 public double getArea() {
		 return x*y;
	 }
	 
	 @Override
	 public void draw() {
		 System.out.println(" "+x+ "x"+ y +"크기의 사각형 입니다.");
	 }
}


public class prac8 {
	public static void main(String[] args) {
			 Shape[] list = new Shape[3];//Shape을 상속 받은 클래스 갤체의 레퍼런스 배열
			 list[0] = new Circle(10);//반지름이 10인 원 객체
			 list[1] = new Oval(20,30); // 20 *30 사각형에 내접하는 타원
			 list[2] = new Rect(10,40); // 10 * 40 크기의 사각형
			 
			 for(int i=0; i <list.length; i++) {
				 list[i].redraw();
			 }
			 for(int i =0; i < list.length; i++) {
				 System.out.println("면적은 " +list[i].getArea());
			 }
		}
}
