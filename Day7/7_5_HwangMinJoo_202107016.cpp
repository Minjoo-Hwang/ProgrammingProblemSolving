/*
난이도 : 1
백준 1427. 소트인사이드
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){

    string input;
    cin >> input;
    int n = input.length();
    int arr[n];

    for(int i = 0; i<n; i++){
        arr[i] = input[i] - '0';
    }

    sort(arr, arr+n, cmp);

    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}