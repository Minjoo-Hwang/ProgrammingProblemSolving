/*
난이도 : 3
n장의 카드 -> 1~n의 숫자
1이 제일 위에, n번 카드가 제일 아래

1. 제일 위에 있는 카드를 버린다.
2. 그 다음, 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.

처음 풀이 ) vector를 사용한 구현 -> * 시간 초과 *
queue로 구현하여 시간을 줄임
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int cardNum;

    cin >> cardNum;

    vector<int> cardStack;
    queue<int> Q;

    for (int i = 0; i < cardNum; i++)
    {
        Q.push(i+1);
    }

    int len = Q.size();

    while(Q.size()>1){
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }

    cout<<Q.front();

    // for (int i = 0; i < len-1; i++)
    // {
        
    //     cardStack.erase(cardStack.begin());

    //     int temp = cardStack[0];

    //     for(int j = 0; j<cardStack.size(); j++){
 
    //         cardStack[j] = cardStack[j+1];
        
    //     }

    //     cardStack[cardStack.size()-1] = temp;
    // }

    // cout<<cardStack[0]<<endl;

    return 0;
}