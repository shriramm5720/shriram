import java.util.Scanner;

public class GCD {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b, gcd;
		System.out.println("Enter the two number");
		a = sc.nextInt();
		b = sc.nextInt();
		int ans = 0;
		for (int i = 1; i <= b; i++) {
			ans += a;
		}
		System.out.println(ans);
	}

}
