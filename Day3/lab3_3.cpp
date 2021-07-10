/*
난이도 : 1
문자열을 알파벳 상 3칸씩 왼쪽으로 밀어 출력하는 프로그램
*/

#include <iostream>
using namespace std;

int main(){

    string input;
    char output;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        output = (char)(input[i]-3);

        if(output < 'A')
            output = output + 26;
        
        cout<<output;
    }

    return 0;
}