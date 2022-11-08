package array;

import java.util.Scanner;

public class TcsQue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter the size of Array");
			int size = sc.nextInt();
			int arr[] = new int[size];
			int b[]=new int [10];
			
            int count=0,j=0;
			 for (int i = 0; i < size; i++) {
				arr[i] = sc.nextInt();
			}
			 System.out.println("Array print");
			 for (int i = 0; i < size; i++) {
					System.out.print(arr[i]);
				}
			 
			 for(int i=0;i<size;i++) {
				 if(arr[i]==0) {
					 count++;
				 }else
				 {
					 b[j++]=arr[i];
				 }
			 }
			 
			 for( int i=0;i<count;i++) {
				 b[j++]=0;
			 }
			 System.out.println();
			 System.out.println("Sorted arry");
			 for (int i=0;i<size;i++) {
				 System.out.print(b[i]);
			 }
			 
			 
			 
			 
			 
			/*  sorting logic 
			System.out.println("Unsorted Array");
			for (int i = 0; i < size; i++) {
				System.out.print(arr[i]+" ");
			}
			System.out.println();
	           int temp;
			for (int i = 0; i < size; i++) {
				for (int j = i + 1; j < size; j++) {
	                if(arr[i]==0) {
	                	temp=arr[i];
	                	arr[i]=arr[j];
	                	arr[j]=temp;
	                }
	                
				}
			}
			
			
			System.out.println("Sorted Array");
	        for (int i = 0; i < size; i++) {
				System.out.print(arr[i]+" ");
			}  */

	}

}
