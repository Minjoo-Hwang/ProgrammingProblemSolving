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