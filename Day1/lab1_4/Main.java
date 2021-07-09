package Day1.lab1_4;
import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int caseNum = sc.nextInt(); //학생 수
        ArrayList<Integer> info = new ArrayList<Integer>();

        for(int i = 0; i < caseNum; i++){

            int sum = 0;
            double avg;
            int count = 0;
            double ratio;
            
            
            int testNum = sc.nextInt();

            for(int j = 0; j<testNum; j++){
                info.add(sc.nextInt());
            }

            for(int j = 0; j<testNum; j++){
                sum += info.get(j);
            }

            avg = (double)(sum / testNum);

            for(int j = 0; j<testNum; j++){
                if(info.get(j) > avg){
                    count ++;
                }
            }
           
            ratio = ((double)count/testNum) * 100.0;

            System.out.printf("%.3f%%\n", ratio);


            info.clear();
        }

        sc.close();
    }
}
