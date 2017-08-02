class Human {
	String name;
	int age;

	// 생성자 추가시키고 초기값 입력값을 하기
	Human(String name, int age) {
		this.name = name;
		this.age = age;
	}

	// 각 필드에 대하여 접근자와 변경자 설정하기
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String toString() {
		return "이름 : " + name + " , " + "나이 : " + age ; 
	}

}