/*
난이도 : 1
문자열 입력 후 10개씩 잘라 출력하는 문제
*/

#include <iostream>
using namespace std;

int main(){

    string input;
    cin >> input;

    for(int i = 0; i<input.length(); i++){
        cout<<input[i];
        if((i+1)%10 == 0)
            cout<<"\n";
    }
    return 0;
}