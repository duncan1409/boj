import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;
//Top-Down
public class Main {
	static int[] dp;
	public static int fibonacci(int N) {
		if (dp[N]!=-1)
			return dp[N];
		return dp[N] =fibonacci(N-2)+fibonacci(N-1);
	}	

	public static void main(String[] args) throws FileNotFoundException{
		System.setIn(new FileInputStream("input.txt"));
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		
		dp[0]=0;
		dp[1]=1;
		for (int i = 0; i < T; i++) {
			int N = sc.nextInt();
			System.out.println(fibonacci(N));
		}
		sc.close();
	}

} 