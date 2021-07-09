package Day2.lab2_4;
import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String dial = sc.next();

        String[] dialArr = new String[dial.length()];
        dialArr = dial.split("");

        int totalTime = 0;

        for(int i = 0; i<dialArr.length; i++){
            int localTime = count(dialArr[i]);

            totalTime += localTime;
        }

        System.out.println(totalTime);

        sc.close();
    }

    private static int count(String str) {
        
        int cond = 1 ;

        if(str.equals("A") || str.equals("B") || str.equals("C"))
            cond = 2;
        else if(str.equals("D") || str.equals("E") || str.equals("F"))
            cond = 3;
        else if(str.equals("G") || str.equals("H") || str.equals("I"))
            cond = 4;
        else if(str.equals("J") || str.equals("K") || str.equals("L"))
            cond = 5;
        else if(str.equals("M") || str.equals("N") || str.equals("O"))
            cond = 6;
        else if(str.equals("P") || str.equals("Q") || str.equals("R") || str.equals("S"))
            cond = 7;
        else if(str.equals("T") || str.equals("U") || str.equals("V"))
            cond = 8;
        else if(str.equals("W") || str.equals("X") || str.equals("Y") || str.equals("Z"))
            cond = 9;
        else if(str.equals("1"))
            cond = 1;

        return cond+1;
    }
}
