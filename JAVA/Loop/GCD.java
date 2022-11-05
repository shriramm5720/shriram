import java.util.Scanner;

public class GCD {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b, gcd;
		System.out.println("Enter the two number");
		a = sc.nextInt();
		b = sc.nextInt();

		while (a != b) {
			if (a > b) {
				a = a - b;
			} else {
				b = b - a;
			}
		}
		gcd = a;
		System.out.println(gcd);
	}

}
