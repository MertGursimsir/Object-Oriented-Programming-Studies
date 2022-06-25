import java.util.Scanner;
import java.util.InputMismatchException;
public class test23{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		System.out.printf("%s\noriginal: %s\n", str.concat("kaymus"),str);
		String arr[] = {str, str.concat("kaymus")};
		print(arr);

		String arr2[] = new String[2];
		//arr2[0] = new String(str);
		//arr2[1] = new String("kaymamus");
		print(arr2);
	}

	private static void print(String arr[]){
		System.out.printf("length: %d\nstrings: %s | %s", arr.length, arr[0], arr[1]);
	}

}