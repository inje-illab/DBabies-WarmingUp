package hel;

class point{
	private int x,y;
	
	point(){//기본 생성자
		x=0;
		y=0;
	}
	point(int x, int y){//생성자 오버로드
		this.x = x;
		this.y = y;
	}
	
	public int get_x() {
		return x;
	}
	
	public int get_y() {
		return y;
	}
	
	protected void move(int x,int y) {//x와 y를 값을 받아 초기화할 떄 사용
		this.x = x;
		this.y = y;
	}
	
}

class colorpoint extends point{
	private String color;
	
	colorpoint(){
		super();//부모클래스의 생성자 호출
		this.color = "BLACK";
	}
	colorpoint(int x,int y){
		super(x,y);
		this.color = "BLACK";
	}
	public void setColor(String color) {
		this.color = color;
	}
	public void setXY(int x, int y) {
		move(x,y); //부모 클래스의 protected 매소드를 이용해서 값을 초기화
	}
	public String toString() {
		String str = this.color + "색의 (" + get_x() + "," + get_y() + ")의 점";
		return str;
	}
	
	
}

public class HI {
	 public static void main(String[] args) {
		colorpoint zeropoint = new colorpoint();//(0,0) 위치의 black 색 점
		System.out.println(zeropoint.toString()+"입니다.");
		
		colorpoint cp = new colorpoint(10,10);
		cp.setXY(5,5);
		cp.setColor("RED");
		System.out.println(cp.toString() + "입니다.");
	}
}
