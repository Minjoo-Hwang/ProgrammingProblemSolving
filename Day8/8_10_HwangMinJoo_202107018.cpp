/*
난이도 : 1
백준 2783. 삼각김밥.
https://www.acmicpc.net/problem/2783
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<float, float> > vec;
    float ratio = 0.00f;
    float min = 100.0;
    float won, gram;
    int N;

    cin >> won >> gram;
    vec.push_back(make_pair(won, gram));
    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> won >> gram;
        vec.push_back(make_pair(won, gram));
    }

    for(int i = 0 ;i<vec.size(); i++){
        ratio = vec[i].first / vec[i].second ;
        if(ratio < min){
            min = ratio;
        } 
    }
    printf("%0.2f\n", min*1000);
}