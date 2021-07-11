/*
난이도 : 1
백준 3052. 나머지
https://www.acmicpc.net/problem/3052
*/

#include <iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;
    int tmpNum;

    for(int i = 0; i<10 ; i++){
        cin >> tmpNum;
        s.insert(tmpNum%42);        
    }  

    cout<<s.size()<<endl;  

    return 0;
}