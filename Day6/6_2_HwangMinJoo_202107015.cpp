/*
난이도 : 3
백준 11866. 요세푸스 문제 0
https://www.acmicpc.net/problem/11866

n명의 사람이 있고 연속적으로 k번째 사람을 제거하며 출력하는 프로그램
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int N, K;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        q.push(i + 1);
    }

    cout<<"<";

    while (!q.empty())
    {
        for (int i = 0; i < K-1; i++)
        {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();

        q.pop();

        if(!q.empty()){
            cout<<", ";
        }
    }

    cout<<">";
    return 0;
}