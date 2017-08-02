public class Test1 {
public static void main(String args[]){
	
	//human 클래스의 객체 생성
	Human h1=new Human("춘향", 18);
	Human h2=new Human("몽룡", 21);
	Human h3=new Human("사또",50);
	System.out.println(h1.toString());
	System.out.println(h2.toString());
	System.out.println(h3.toString());

	//상속 클래스의 객체 생성
	Student s1=new Student("명진", 21, "컴퓨터공학");
	Student s2=new Student("미현", 22, "유아교육");
	Student s3=new Student("용준", 24, "애니메이션");
	
	System.out.println(s1.toString());
	System.out.println(s2.toString());
	System.out.println(s3.toString());

}
}
