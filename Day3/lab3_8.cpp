/*
백준 15947번. 아기 석환 뚜루루 뚜루
https://www.acmicpc.net/problem/15947
난이도 : 1

노래의 가사를 단어별로 자르고 index를 매겨
input에 해당하는 index의 가사 단어 반환
*/

#include <iostream>
using namespace std;

int main(){
    //전체 단어 수 = 14
    int input;
    cin >> input;

    int remainder = input%14;
    int share = input/14;

    if(remainder == 1 || remainder == 13)
        cout<<"baby"<<endl;
    else if(remainder == 2 || remainder == 0)
        cout<<"sukhwan"<<endl;
    else if(remainder == 3||remainder ==7||remainder ==11){
        if(share<3){
            cout<<"tururu";
            for(int i = 0; i<share; i++){
                cout<<"ru";
            }
            cout<<"\n";
        }else{
            cout<<"tu+ru*"<<(share+2)<<endl;;
        }
    }
    else if(remainder == 4||remainder ==8||remainder ==12){
        if(share<4){
            cout<<"turu";
            for(int i = 0; i<share; i++){
                cout<<"ru";
            }
            cout<<"\n";
        }else{
            cout<<"tu+ru*"<<(share+1)<<endl;
        }
    }
    else if(remainder == 5)
        cout<<"very"<<endl;
    else if(remainder == 6)
        cout<<"cute"<<endl;
    else if(remainder == 9)
        cout<<"in"<<endl;
    else if(remainder == 10)
        cout<<"bed"<<endl;
        

}