public class test25{
	public static void main(String args[]){
		int k = 125;
		int place = 1, bin=0, rem;

		while (k != 0){
			rem = k%2;
			bin = bin + (rem * place);
			k = k / 2;
			bin*=10;
		}
		String str = new String(Integer.toString(bin));
		System.out.printf("%s", str);
	}
}

/*

1    6172 10
1    3086 100
1 	 1543 1000
1001 771  10000
101001 385  10


*/