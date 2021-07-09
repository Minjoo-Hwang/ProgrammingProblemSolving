package Day2.lab2_1;
import java.util.*;

public class Main {
	public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
		while (true) {
			String str = sc.next();
			boolean checkedValue;

            if(str.equals("end")){
                break;
            }

			checkedValue = check(str);

			if (checkedValue == false) {
				System.out.println("<"+str+">"+ " is not acceptable.");
			} else if (checkedValue == true) {
				System.out.println("<" + str + ">" + " is acceptable.");
			}
		}
        sc.close();
	}

	public static boolean check(String str) {

		if(str.equals("end")) {
			System.exit(0);
		}
		
		if ((str.contains("a") || str.contains("e") || str.contains("i") || str.contains("o")
				|| str.contains("u")) == false) {
			return false;
		}

		String[] splittedArr = str.split("");
		int vowelCount = 0;
		int consoCount = 0;

		for (int i = 1; i <= splittedArr.length; i++) {
			for (int j = 0; j < i - 1; j++) {
				if (checkVowelChar(splittedArr[i - 1])) {
					if (checkVowelChar(splittedArr[i - 2])) {
						vowelCount++;
						System.out.println("vowelCount : "+vowelCount);
						break;
					}		
				}
			}
		}

		

		for (int i = 1; i <= splittedArr.length; i++) {
			for (int j = 0; j < i - 1; j++) {
				if (checkConsoChar(splittedArr[i - 1])) {
					if (checkConsoChar(splittedArr[i - 2])) {
						consoCount++;
						break;
					}

				}
			}
		}

		for (int i = 1; i <= splittedArr.length; i++) {
			for (int j = 0; j < i - 1; j++) {
				if(splittedArr[i-1].equals(splittedArr[i - 2])) {
					if(str.contains("oo")||str.contains("ee")) {
						continue;
					}else {
						return false;
					}
				}
			}
		}
		
		if ((vowelCount + 1) >= 4)
			return false;
		else if ((consoCount + 1) >= 4)
			return false;
		else 
			return true;

	}

	public static boolean checkVowelChar(String str) {

		if ((str.contains("a") || str.contains("e") || str.contains("i") || str.contains("o") || str.contains("u"))) {
			return true;
		}

		return false;

	}

	public static boolean checkConsoChar(String str) {

		if ((str.contains("a") || str.contains("e") || str.contains("i") || str.contains("o")
				|| str.contains("u")) == false) {
			return true;
		}

		return false;

	}

}