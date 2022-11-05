import java.util.Scanner;

public class ReverseNO {

	private static Scanner sc;

	public static void main(String[] args) {
		sc = new Scanner(System.in);
		System.out.println("Enter the number");
		int n=sc.nextInt(); 
	    close();
		int rem;
	  int ans=0;
       while(n>0)
       {
    	   rem=n%10;
    	   ans=(ans*10)+rem;
    	  
    	   n=n/10;
       }
       System.out.println(ans);
	}

	private static void close() {
		// TODO Auto-generated method stub
		
	}

}
