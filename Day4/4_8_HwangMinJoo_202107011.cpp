/* 
난이도 : 1

백죽 1712. 손익분기점.
https://www.acmicpc.net/problem/1712

1070 + 70 * x < 170 * x => 100x > 1070 -> 이렇게 되는 시점 = 손익분기점

*/

#include <iostream>
using namespace std;

int main()
{
    int fix, change, benefit, flag;
    int x = 2;
    cin >> fix >> change >> benefit;
    bool rep = true;

    int mul = benefit - change;

    if (mul <= 0)
        cout << "-1";
    else
    {
        cout << fix/(benefit-change) + 1 <<endl;
    }

    return 0;
}
