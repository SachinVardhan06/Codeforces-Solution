// Solution By Sachin Vardhan
// Only for Educational Purpose
// Codeforces Round 280 (DIV 2) A. Vanya and Cubes

#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    int p=0,q=0,x=0;

    for(int i=1;i<=n;i++){
        if(n<=3){
            return 1;
            break;
        }
        p=p+i;
        q=p+q;
        if(q > n){
            break;
        }
        x++;
    }
    return x;
}

/*-------------------int main -------------------*/

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}