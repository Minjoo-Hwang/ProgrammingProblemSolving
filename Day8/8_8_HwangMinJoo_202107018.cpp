/*
난이도 1
백준 15552. 빠른 A+B

문제 설명을 그대로 활용하면 시간 속도를 줄일 수 있다.
https://www.acmicpc.net/problem/15552

ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
*/

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, x, y;
    cin >> a;

    for(int i = 0; i<a; i++){
        cin >> x >> y;
        cout<<x+y<<"\n";
    }

    return 0;
}