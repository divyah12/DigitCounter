import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class NumApp {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		int[] digit;
		digit=new int[10];
		InputStreamReader inStream = new InputStreamReader(System.in);
		BufferedReader stdin = new BufferedReader(inStream);
		System.out.println("Enter number to count digit");
		int n =Integer.parseInt(stdin.readLine());
	    //System.out.println(n);
		int x;
		while (n!=0)
		{
			x = n % 10;
			n /= 10;
			digit[x]++;
		}
		System.out.println("Count of each digit is as follows:");
		for (int j = 0;j < 10; j++) {
			System.out.println("count of "+j+" -> "+digit[j]);
			System.out.println();
		}		
	}
}