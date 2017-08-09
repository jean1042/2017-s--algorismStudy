//날짜 계산 문제
/*
 1. ESM을 입력
 2. 이 나라 ESM 이 우리가 사용하는 년도의 몇년인지 구함
 */
import java.util.*;
public class algo {
	public static void main(String args[]){
	
	//E입력받음
	System.out.println("E를 입력");
	Scanner scan1=new Scanner(System.in);
	int E=scan1.nextInt();
	
	//S입력받음
	System.out.println("S를 입력");
	Scanner scan2=new Scanner(System.in);
	int S=scan2.nextInt();
	
	//M입력받음
	System.out.println("M를 입력");
	Scanner scan3=new Scanner(System.in);
	int M=scan3.nextInt();
	
	int e=1,s=1,m=1;

	for (int i=1; ; i++){
	if (e==E && s==S && m==M){
	System.out.println(i);
	break;
	}

	e+=1;
	s+=1;
	m+=1;
	
	if (e==16){
		e=1;
	}
	if(s==29){
		s=1;
	}
	if(m==20){
		m=1;
	}
	}
	}
}

