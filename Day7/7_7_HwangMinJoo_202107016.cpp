/*
난이도 : 2
백준 11004. K번째 수

시간 초과
-> scanf가 cin보다 약 1.3초 빠르다는 사실을 이용해 다시 풀었다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int count, order;
    scanf("%d %d", &count, &order);

    vector<int> vec;

    for(int i = 0; i<count ; i++){
        int input;
        scanf("%d", &input);
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());
    
    cout << vec[order-1] <<endl;


}