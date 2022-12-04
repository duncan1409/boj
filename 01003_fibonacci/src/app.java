import java.util.Scanner;

public class app {
	public static int FibonacciFunction(int N) {
		if (N == 0)
			return 1;
		else if (N == 1)
			return 1;
		else
			return FibonacciFunction(N - 1) + FibonacciFunction(N - 2);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();

		System.out.println(FibonacciFunction(N));
	}

}