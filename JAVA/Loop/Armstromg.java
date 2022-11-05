import java.util.Scanner;

public class ArmstrongNum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number");
		int n=sc.nextInt(); 
	    int num=n;
		int rem;
	  int result=0;
       while(n>0)
       {
    	   rem=n%10;
    	  result+=rem*rem*rem;
    	  
    	   n=n/10;
       }
       if(num==result)
       {
    	   System.out.println("This is armstrong numner");
       }else
       {
    	   System.out.println("This is not armstrong numner");

       }
	}

}
