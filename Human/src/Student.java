class Student extends Human{
	
//major 필드 정의
String major;

//부모클래스의 생성자를 호출
public Student(String name, int age, String major){
	super(name, age);
	this.major=major;
}
//접근자와 변경자를 작성하기
public String getMajor(){
	return major;
}

public void setMajor(){
	this.major=major;
}
//객체의 현재 상태를 나타내는 문자열을 반환하는 toString 작성하기
public String toString(){
	return "이름 : " + name + " , " + "나이 : " + age +  " , " + " 전공 " + major; 
}

}
