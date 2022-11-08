package array;

import java.util.Scanner;

public class GreatestNoCount {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array");
		int size=sc.nextInt();
		int arr[]=new int[size];
		int count=0;
		
		for(int i=0;i<size;i++) {
			arr[i]=sc.nextInt();
					if(arr[0]<=arr[i]) {
						count++;
					}
		}
		System.out.println("******************");
		System.out.println( "count ="+count);
		


	}

}
