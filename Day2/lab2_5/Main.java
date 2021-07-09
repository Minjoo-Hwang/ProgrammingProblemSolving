package Day2.lab2_5;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        input = input.toUpperCase();

        int[] charCount = new int[26];

        for(int i = 0; i<input.length(); i++){
            charCount[input.charAt(i)-'A'] ++;
        }

        int max = -999;
        char ret = '?';

        for(int i = 0; i<charCount.length; i++){
            if(charCount[i] == max){
                ret = '?';
            }
            else if(charCount[i] > max){
                max = charCount[i];
                ret = (char)('A' + i);
            }
        }

        System.out.println(ret);

        sc.close();
    }
}
