/*
난이도 : 1
백준 10867. 중복 빼고 정렬하기
*/

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

bool compare(int a, int b){
    return a<b;
}

int main(){

    int N;
    int input;
    set<int> s;

    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> input;
        s.insert(input);
    }

    int len = s.size();
    int setArr[len];
    int j = 0;

    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        setArr[j] = *it;
        j++;
	}

    sort(setArr, setArr+len, compare);

    for(int i = 0; i < len; i++){
        cout<<setArr[i]<<" ";
    }

    return 0;
}