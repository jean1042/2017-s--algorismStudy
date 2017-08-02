
import java.util.Scanner;
public class EmployeeTestReal {
	

		   public static void main(String args[]) {

		      // 배열 참조 변수 선언
		      Employee[] a = new Employee[2];
		      Scanner scan = new Scanner(System.in);

		      // 사용자로부터 데이터를 받아 배열에 추가한다
		      for (int i = 0; i < a.length; i++) {
		         //배열 Employee 객체 생성
		    	  a[i] = new Employee();
		         
		    	  //배열에 이름 입력받기
		    	  System.out.print("이름을 입력하세요 [직원번호" + (i + 1) + "] : ");
		         String name = scan.next();
		         a[i].setName(name);
		         
		         //배열에 주소 입력받기
		         System.out.print("주소를 입력하세요 [직원번호" + (i + 1) + "] : ");
		         String address = scan.next();
		         a[i].setAddress(address);
		         
		         //배열에 연봉 입력받기
		         System.out.print("연봉을 입력하세요 [직원번호" + (i + 1) + "] : ");
		         int salary = scan.nextInt();
		         a[i].setSalary(salary);
		         
		         //배열에 전화번호 입력받기
		         System.out.println("전화번호를 입력하세요 [직원번호" + (i + 1) + "] : ");
		         String phoneNumber = scan.next();
		         a[i].setPhoneNumber(phoneNumber);
		       	 }
		      
		      //수정 여부 물어보기
		      System.out.println("수정하시겠습니까?");
		      Scanner input=new Scanner(System.in);
		      	char c;
		      	c=input.next().charAt(0);
		      	while (c=='y')
		      {
		     
		         //수정하고 싶은 직원 수정하기
		         System.out.println("수정하고 싶은 직원번호를 입력하세요 : ");
		         int fixNumber=(scan.nextInt()-1);
		        
		        System.out.print("이름을 입력하세요 : ");
		         String name2 = scan.next();
		         a[fixNumber].setName(name2);

		         System.out.print("주소를 입력하세요 : ");
		         String address2 = scan.next();
		         a[fixNumber].setAddress(address2);

		         System.out.print("연봉을 입력하세요  : ");
		         int salary2 = scan.nextInt();
		         a[fixNumber].setSalary(salary2);

		         System.out.println("전화번호를 입력하세요 : ");
		         String phoneNumber2 = scan.next();
		         a[fixNumber].setPhoneNumber(phoneNumber2);
		         
		      break;
		      
		      }
		      
		     
		    	  
		      // 배열에 저장된 모든 데이터를 출력한다.
		      for (int i = 0; i < a.length; i++) {
		         System.out.println("직원번호 "+ (i+1)+ " name : " +a[i].getName()+" Address : "+a[i].getAddress()+" Annual_Salary : "+a[i].getSalary()+" phone : "+a[i].getPhoneNumber());
		         
		      }
		   }
		}



