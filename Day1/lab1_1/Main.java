package Day1.lab1_1;
import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[8];

        for(int i=0; i<8; i++){
            arr[i] = sc.nextInt();
        }

        boolean ascending = false;
        boolean descending = false;
        boolean flag = false;

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < i; j++){
                if(arr[i] > arr[j]){
                    ascending = true;
                }else{
                    ascending = false;
                    flag = true;
                }
            }
            if(flag)
                break;
        }


        flag = false;

        if(!ascending){
            for(int i = 0; i < 8; i++){
                for(int j = 0; j < i; j++){
                    if(arr[i] < arr[j]){
                        descending = true;
                    }
                    else{
                        descending = false;
                        flag = true;
                    }
                }
                if(flag)
                    break;
            }
        }

        if(ascending)
            System.out.println("ascending");
        else if(descending)
            System.out.println("descending");
        else if(!descending)
            System.out.println("mixed");

        sc.close();
    }
}
