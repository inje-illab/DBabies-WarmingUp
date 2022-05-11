package prac1;
import java.util.Scanner;

abstract class Shape {
   private Shape next;
   public Shape() { next = null; }
   public void setNext(Shape obj) { next = obj; } // 링크 연결
   public Shape getNext() { return next; }
   public abstract void draw();
}

class Line extends Shape {
   String name ="line";
   @Override
   public void draw() {
      System.out.println("Line");
   }
}

class Rect extends Shape {
   String name ="Rect";
   @Override
   public void draw() {
      System.out.println("Rect");
   }
}

class Circle extends Shape {
   String name ="circle";
   @Override
   public void draw() {
      System.out.println("Circle");
   }
}

class GraphicEditor{
   private Shape head, tail;  
   private Scanner sc; 
   
   public GraphicEditor() {
      head = null;  // 시작 노드
      tail = null; // 끝 노드
      sc = new Scanner(System.in);
   }
   
   public void run() {
      System.out.println("그래픽 에디터 beauty를 실행합니다.");
      while(true) {
         System.out.print("삽입(1), 삭제(2), 모두 보기(3), 종료(4) >> ");
         int num = sc.nextInt();
         switch(num) {
         case 1:
            System.out.print("Line(1), Rect(2), Circle(3) >> ");
            num = sc. nextInt();
            insert(num);
            break;
         case 2:
            System.out.print("삭제할 도형의 위치 >> ");
            num = sc.nextInt();
            delete(num);
            break;
         case 3:
            print();
            break;
         case 4:
            System.out.println("beauty을 종료합니다.");
            sc.close();
            return;
         }
      }
   }
   
   public void insert(int draw) { 
	   //이 함수를 통해 원하는 도형은 연결리스트에 추가합니다. 
      Shape grapic;
      
      switch(draw) {
      case 1:
         grapic = new Line();
         break;
      case 2:
         grapic = new Rect();
         break;
      case 3:
         grapic = new Circle();
         break;
      default:
         System.out.println("다시 입력해 주세요.");
         return;
      }
      
      if(head == null) { // 시작 노드가 비어있으면 
         head = grapic; //시작 노드와 끝노드를 같게 저장합니다. 
         tail = grapic;
      }
      else {
         tail.setNext(grapic); // 끝 노드에 새로운 노드를 연결하고 
         tail = grapic; // 끝 노드는 새로 만들어진 노드를 가리키게 함
      }
   }
   
   public void print() { // 전체 노드 출력
      Shape s = head;
      
      while(s != null) {
         s.draw();
         s = s.getNext();
      }
   }
   
   public void delete(int num) { // num은 몇 번째 노드인지
      Shape cur = head; // 현재 노드
      Shape tmp = head;
      int i;
      
      if( num == 1) { // 첫번째 노드를 삭제하는 경우 
         if(head == tail) { // 만약에 노드가 한 개일 경우 
            head = null;
            tail = null; //다 초기화해준다. 
            return;
         }
         else { // 노드가 두개 이상
            head = head.getNext(); // 첫 번째 노드를 원래 2번쨰 노드를 가르키게 함으로서 원래 첫 노드에 연결할 방법이 없어집니다. 그러므로 원래 2번째가 첫 번쨰로 됩니다.
            return;
         }
      }
      for(i=1; i<num; i++) {
         tmp = cur; // 현재 노드를 저장 후 
         cur = cur.getNext(); // 현재 노드를 다음 노드로 이동
         
         if(cur == null) { // 노드 수가 입력 값보다 적을 때
            System.out.println("삭제할 수 없습니다.");
            return;
         }
      }
      if(i==num) { // 끝 노드를 가리킬 때
         tmp.setNext(cur.getNext());
         tail = tmp;
      }
      else // 끝노드가 아니라면 이전 노드가 다음 노드를 가리키게 합니다.
    	  // 현재 노드가 삭제됩니다.
         tmp.setNext(cur.getNext());
   }
 
}

public class Abstract_prac {
	  public static void main(String[] args) {
	         GraphicEditor editor = new GraphicEditor();
	         editor.run();
	   }
}
