public class test24{
	public static void main(String args[]){
		int k = 123412;
		StringBuilder str = "";
		while (k > 0){
			str = str.concat(Integer.toString(k%2));
			k/=2;
		}
		String str2 = "";
		for (int i = str.length()-1; i >= 0; --i){
			str2 = str2.concat(Character.toString(str.charAt(i)));
		}

		System.out.printf("%s\n", str2);
	}
}