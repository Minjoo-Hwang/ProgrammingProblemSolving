/*
난이도 : 1

백준 2163. 초콜릿 자르기
https://www.acmicpc.net/problem/2163

초콜릿을 한조각씩 자르는데 필요한 최소의 자르는 수
*/

#include <iostream>
using namespace std;

int main(){

    int totalCount = 0;
    int n, m;

    cin >> n >> m;

    totalCount = (n-1) + (m-1)*n;

    cout<<totalCount<<endl;

    return 0;
}