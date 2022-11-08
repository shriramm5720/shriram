package array;

import java.util.Scanner;

public class Add {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a[] = new int[10];
		int b[] = new int[10];
		int c[] = new int[10];

		System.out.println("Enter the Limit of A ");
		int n1 = sc.nextInt();
		for (int i = 0; i < n1; i++) {
			a[i] = sc.nextInt();
		}

		System.out.println("Enter the Limit of B");
		int n2 = sc.nextInt();
		for (int i = 0; i < n2; i++) {
			b[i] = sc.nextInt();
		}

		if (n1 == n2) {
			for (int i = 0; i < n1; i++) {
				c[i] = a[i] + b[i];
			}

			for (int i = 0; i < n1; i++) {
				System.out.println(c[i]);
			}

		} else {
			System.out.println("Matrix order dont match");
		}

	}

}
