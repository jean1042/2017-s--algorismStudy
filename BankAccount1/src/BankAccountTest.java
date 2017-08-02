
public class BankAccountTest {
	public static void main(String args[]){
		
		System.out.println("BankAccountTest 의 메인 함수");
		
		//BankAccount1의 두 객체 a1 과 a2 생성
		BankAccount1 a1=new BankAccount1();
		BankAccount1 a2=new BankAccount1();
		
		
		//a1의 잔고를 100으로 한다.
		a1.deposit(100);
		//a2의 잔고를 50으로 한다.
		a2.deposit(50);
		//a1에서 60을 인출한다.
		a1.withdraw(60);
		//a2에서 30을 인출한다.
		a2.withdraw(30);
	
		System.out.println("------------------");
	//printBalance Test
		a1.PrintBalance();
		a2.PrintBalance();
		
		System.out.println("------------------");
	//addInterest Test
		a1.addInterest(a1.getBalance());
		System.out.println("a1의 연 이자는"+(int)a1.addInterest(a1.getBalance()));
	
		System.out.println("------------------");
	//잔액 넘게 인출하는 경우 withdraw 함수 Test
		a1.withdraw(50);
		a1.PrintBalance();
		
		a1.deposit(100);
		a1.PrintBalance();
		System.out.println("------------------");

	
	}
	
}
