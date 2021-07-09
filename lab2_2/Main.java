package lab2_2;
import java.util.*;

public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int caseNum = sc.nextInt();
        String testCase;
    
        for(int i = 0; i < caseNum; i++){
            testCase = sc.next();
            int length = testCase.length();
            int count = 0;
            int totalCount = 0;

            String[] testArr = new String[length];
            testArr = testCase.split("");

            for(int j = 0; j<testArr.length; j++){
                if(testArr[j].equals("O")){
                    count++;
                }else{
                    count = 0;
                }
                   
                totalCount += count;
    
            }

            System.out.println(totalCount);
            
        }

        sc.close();
    }
}
