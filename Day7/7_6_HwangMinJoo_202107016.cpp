/*
난이도 : 1
백준 11650. 좌표 정렬하기.

시간 초과 -> endl 이 아닌 "\n"로 바꾸니 해결됐다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return (a.second < b.second);
    else
        return a.first < b.first;
}

int main()
{
    int dotNum, a, b;
    cin >> dotNum;

    vector<pair<int, int> > vec;

    for (int i = 0; i < dotNum; i++)
    {
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    sort(vec.begin(), vec.end(), comp);

    for (int i = 0; i < dotNum; i++)
    {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }

    return 0;
}