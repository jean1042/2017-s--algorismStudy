//��¥ ��� ����
/*
 1. ESM�� �Է�
 2. �� ���� ESM �� �츮�� ����ϴ� �⵵�� ������� ����
 */
import java.util.*;
public class algo {
	public static void main(String args[]){
	
	//E�Է¹���
	System.out.println("E�� �Է�");
	Scanner scan1=new Scanner(System.in);
	int E=scan1.nextInt();
	
	//S�Է¹���
	System.out.println("S�� �Է�");
	Scanner scan2=new Scanner(System.in);
	int S=scan2.nextInt();
	
	//M�Է¹���
	System.out.println("M�� �Է�");
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

