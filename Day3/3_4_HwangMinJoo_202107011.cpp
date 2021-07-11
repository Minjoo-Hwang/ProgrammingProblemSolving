/*
난이도 : 3
문 여는 법 : 밀어서 여는 법 & 당겨서 여는 법
규칙 2 : 연속 2번 같은 방법 X
규칙 3 : 2의 배수 = 같은 방법
규칙 4 : 3의 배수 = 같은 방법

* point
1. 밀 - 당 - 밀 - 당 - 밀 - 당? 
2. 당 - 밀 - 당 - 밀 - 당 - 밀?
-> 어떻게 시작하던지 2, 3번째는 연속되므로 같은 방식으로 열 수 없고,
둘의 공배수인 6은 밀어도 당겨도 문을 열지 못한다.

수정사항 - return 값이 0이 아닐 경우 런타임에러 발생
*/


#include <iostream>
using namespace std;

int main(){

    int openCase;
    int firstNum;

    cin>>openCase;
    cin>>firstNum;

    if(openCase >= 6){
        cout<<"Love is open door";
        return 0;
    }

    for(int i = 1; i<openCase; i++){
        if(firstNum == 0){
            if((i)%2 == 0)
                cout<<"0"<<endl;
            else
                cout<<"1"<<endl;
        }else{
            if((i)%2 == 0)
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        }
    }


    return 0;
}