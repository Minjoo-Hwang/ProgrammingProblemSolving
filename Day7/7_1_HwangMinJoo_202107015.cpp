/*
난이도 : 3
-> 백터 안에 pair를 쓰는 아이디어을 참고함.

시간 초과 발생
-> 벡터 입력 시, 발생하는 시간을 줄여주었다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    int N;
    cin >> N;

    vector< pair<int, string> > vec(N);

    for(int i = 0; i<N; i++)
        cin >> vec[i].first >> vec[i].second;

    stable_sort(vec.begin(), vec.end(), compare);

    for(int i = 0; i<N; i++)
        cout << vec[i].first << " " <<vec[i].second <<endl;

    return 0;
}