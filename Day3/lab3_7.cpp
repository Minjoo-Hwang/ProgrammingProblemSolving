/*
난이도 : 2
소비자에게 레모네이드를 팔며 발생하는 돈을 통해 거스름돈을 내어주도록 하는 프로그램
거스름돈이 없을 경우 끝

45번째줄에 
    if((five<0)||(ten<0)||(twenty<0))
        return false;
위 코드를 넣어 실행했는데 실행되지 않았던 점에 대해 궁금합니다.
*/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        // 5, 10, 20 달러를 통해 지불 가능하다.

        int five = 0;
        int ten = 0;
        int twenty = 0;
        
        for(int i = 0; i<bills.size(); i++){          
            
            if(bills[i]==5){
                five++;
            }
            
            else if(bills[i] == 10){
                if(five >= 1){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }
            
            else if(bills[i]==20){
                if(five>=3 && ten==0){
                    five -= 3;
                    twenty ++;
                }
                else if((five>=1)&&(ten>=1)){
                    five --;
                    ten --;
                    twenty ++;
                }else{
                    return false;
                }
            }
            
        }
        
        return true;
    }
};