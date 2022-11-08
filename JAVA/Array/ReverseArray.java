package org.array;

public class ArrayReverse {

	public static void main(String[] args) {
		
		int arr[]= {1,2,3,4,5,6,7};
		int temp;
		int n=7;
		
		for(int i=0;i<n/2;i++) {
			if(arr[n-1-i]) {
				temp=arr[i];
				arr[i]=arr[n-1-i];
				arr[n-1-i]=temp;
			}
		}
		
		for(int i=0;i<6;i++) {
			System.out.println(arr[i]);
		}
		
	}

}
