/*
난이도 : 2
백준 5355. 화성 수학.

https://www.acmicpc.net/problem/5355

특정 기호를 인식해 수학 수식으로 바꿔 푸는 문제
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int testCase;
    float result;

    cin >> testCase;

    for(int i = 0; i<testCase; i++){
        string str;
        
        cin >> result;
        getline(cin, str);

        for(int i = 0; i<str.length(); i++){
            if(str[i]==' ') str.erase(i, 1);
        }

        for(int i = 0 ; i<str.length(); i++){
            if(str[i] == '@'){
                result = result * 3;
            }else if(str[i] == '%'){
                result = result + 5;
            }else if(str[i] == '#'){
                result = result -7;
            }
        }

        printf("%.02f\n", result);

    }
}