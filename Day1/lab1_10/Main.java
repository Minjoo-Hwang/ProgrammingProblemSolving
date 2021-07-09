package Day1.lab1_10;
import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int studentNum = sc.nextInt();
    
        String[] studentArr = new String[studentNum]; //student 이름 몽땅 저장

        for(int i = 0; i<studentNum; i++){
            studentArr[i] = sc.next();
        }
        

        char[] firstCharArr = new char[studentNum]; //student 이름의 첫글자 char을 몽땅 저장
        String[] firstStrArr = new String[studentNum]; //student 이름의 첫글자를 String으로 몽땅 저장

        for(int i = 0; i<studentNum; i++){
            firstCharArr[i] = studentArr[i].charAt(0);
        }

        Set<String> nameSet = new HashSet<String>(); //student 이름의 첫글자를 중복이 없게 HashSet에 저장

        for(int i = 0; i<studentNum; i++){
            String name = Character.toString(firstCharArr[i]);
            nameSet.add(name);
            firstStrArr[i] = name;
        }

        Iterator<String> iter = nameSet.iterator();
        HashMap<String,Integer> map = new HashMap<String,Integer>();
        String[] firstCharSetArr = new String[nameSet.size()]; 

        int k = 0;
        while(iter.hasNext()) {
            String putStr = iter.next();
            map.put(putStr, 0);
            firstCharSetArr[k++] = putStr; //중복 없는 student 이름의 첫글자를 string 배열에 저장
		}

        //만약 중복없는 첫 글자와 똑같은 첫글자를 가진 이름이 있다면 map에 key를 이름 첫글자로하는 value값을 꺼내 1 증가시켜 다시 넣어준다.
        for(int i = 0 ; i < studentNum; i++){ //모든 학생들 이름 훑으며 첫 글자의 개수 대로 map의 count 높여준다.
            for(int j = 0; j < map.size(); j++){ 
                if(firstCharSetArr[j].equals(firstStrArr[i])){
                    int count = map.get(firstStrArr[i]);
                    count++;
                    map.replace(firstStrArr[i], count);
                }
            }
        }

        int flag = 0;

        for(String key : map.keySet()){
            if(map.get(key) >= 5){
                System.out.printf("%s", key);
                flag = 1;
            }
        }

        if(flag == 0)
            System.out.println("PREDAJA");
        else
            System.exit(0);

        sc.close();
    }
}
