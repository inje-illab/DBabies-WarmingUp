package prac1;

class box{
	private String conts;
	
	box(String conts){
		this.conts = conts;
	}
	
	public String toString() {
		return conts;
	}
}

public class book_array2 {
	public static void main(String[] arg) {
		box[] B = new box[3];
		
		B[0] = new box("First");
		B[1] = new box("Second");
		B[2] = new box("Third");
		
		System.out.println(B[0]);
		System.out.println(B[1]);
		System.out.println(B[2]);
	}
}

