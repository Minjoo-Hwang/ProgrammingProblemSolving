/*
난이도 : 3
백준 1920. 수 찾기

처음에 linear search로 for문을 사용하여 시간초과가 발생했다.
시간초과를 해결하는 부분에 있어 구글링하여 참고하였다.
이진탐색 binary search를 이용해야 이 문제를 해결할 수 있으며,
algorithm 헤더파일의 binary search 함수로 구현하였다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int testCase1, testCase2;
    vector<int> firstArr, secondArr;

    scanf("%d", &testCase1);
    firstArr.resize(testCase1);
    for(int i = 0; i< testCase1; i++)
        scanf("%d", &firstArr[i]);
    
    sort(firstArr.begin(), firstArr.end());

    scanf("%d", &testCase2);
    secondArr.resize(testCase2);
    for(int i = 0; i< testCase2; i++)
        scanf("%d", &secondArr[i]);

    for(int i = 0; i<testCase2; i++)
        printf("%d\n", binary_search(firstArr.begin(), firstArr.end(), secondArr[i]));
    
}