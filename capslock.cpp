// Solution By Sachin Vardhan
// Only for Educational Purpose
// Codeforces Beta Round 95 A.cAPS LOCK 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string sac;
    cin>>sac;
    char a;
    bool b = true;
    
    for(int i=1;i<sac.length();i++){
        if(islower(sac[i])){
            b = false;
        }
    }
    if(b == true){
        for(int j=0;j<sac.length();j++){
            if(islower(sac[j])){
                a = toupper(sac[j]);
            }
            else
                a = tolower(sac[j]);
            cout<<a;
        }
    }
    else{
        cout<<sac;
    }  
    return 0;
}