package array;

import java.util.Scanner;

public class Sorting {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of Array");
		int size = sc.nextInt();
		int arr[] = new int[size];

		for (int i = 0; i < size; i++) {
			arr[i] = sc.nextInt();
		}
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
		}
	}

}
