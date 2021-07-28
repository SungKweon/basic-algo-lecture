// Authored by : BaaaaaaaaaaarkingDog
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int freq[205]={};
int arr[105]={};//크기 주의

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt;
    int v;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }   
    cin >> v;

    for(auto c : arr)
        freq[c+100]++;
     
    cout << freq[v+100];    
    return 0;
    
}
