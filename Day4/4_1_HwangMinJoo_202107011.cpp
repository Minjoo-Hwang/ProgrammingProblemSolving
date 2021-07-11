/* 
난이도 : 1
사용자 5명의 점수 4가지를 받고  총 합이 가장 높은 사용자의
순서와 총 점수를 반환
*/

#include <iostream>
using namespace std;

int main(){

    int score[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int tmpScore;

            cin >> tmpScore;
            score[i] += tmpScore;
        }
    }

    int maxidx = -1;
    int max = -1;

    for (int i = 0; i < 5; i++)
    {
        if(score[i]>max){
            max = score[i];
            maxidx = i+1;
        }
    }

    cout<<maxidx<<" "<<max<<endl;

    return 0;
}