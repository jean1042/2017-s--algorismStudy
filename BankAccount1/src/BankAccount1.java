public class BankAccount1 {
	//잔액을 나타내는 변수
	int balance;
	
	//예금 메소드
	void deposit(int userMoney){
		balance+=userMoney;
	System.out.println(userMoney+"원 이 예금되었습니다.");	
	}
	
	//출금 메소드
	int withdraw (int userMoney)
	{
	if (balance< userMoney){
		System.out.println("잔액이 모자랍니다. 인출실패!!");
	}
	else 
		balance-=userMoney;		
	System.out.println(userMoney+ " 원이 출금되었습니다.");	
	return  balance;
	}

	//현재 잔액을 가져오는 메소드
	int getBalance(){
		return balance;
	}
	
	//현재 잔액을 출력하는 메소드
	void PrintBalance(){
		System.out.println("현재 잔액:" + balance);
		
	}
	
	//현재 잔액에 대하여 연 7.5% 의 이자를  계산하여 추가하는 메소드
	int addInterest(int balance){
		int interest;
		//이자 계산
		interest= (int)(balance * 0.075);
		//잔액에 이자 더하기
		balance+=interest;
		return interest;
	}
	
	
	
}
