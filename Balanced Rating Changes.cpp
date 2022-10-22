// Solution By Sachin Vardhan
// Only for Educational Purpose
// Codeforces Global Round 5 A. Balanced Rating Changes


#include<bits/stdc++.h>
using namespace std;

int main(){
    int sac;
    cin>>sac;
    int value = 0;
    int arr[sac];
    for(int i=0;i<sac;i++){
        cin>>arr[i];
        if(arr[i]%2) value++;
    }
    value = value/2;
    for(auto x:arr){
        if(x%2){
            if(value>0) value--,x--;
            else x++;
        }
        cout<<x/2<<endl;
    }
    return 0;
}