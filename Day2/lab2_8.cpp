// 난이도 : 1
#include <iostream>
using namespace std;

int main(){
    int testCase;
    cin >> testCase;

    string str;
    string strArr[testCase];

    for(int i = 0; i<testCase; i++){
        cin >> str;
        cout<<"String #"<<(i+1)<<endl;

        for(int i = 0; i<str.length(); i++){
            if(str[i]=='Z'){
                cout<<'A';
            }else{
                cout<< (char)(str[i]+1);
            }
        }
        cout<<"\n\n";
    }

    return 0;
}