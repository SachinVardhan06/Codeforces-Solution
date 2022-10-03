// Solution By Sachin Vardhan
// Only for Educational Purpose
// Codeforces Global Round 22 C.Even Number Addicts 

#include<bits/stdc++.h>
using namespace std;

void atom(){
    int n;
    cin>>n;
    int eve = 0;
    int odde = 0;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2 == 0){
            eve++;
        }
        else{
            odde++;
        }
    }
    if (odde % 4 == 0 || odde % 4 == 3) {
        cout << "Alice" << endl;
        return;
    }
    else if ((eve % 4 == 1 || eve % 4 == 3) && odde % 4 == 1) {
        cout << "Alice" << endl;
        return;
    }
    else {
        cout << "Bob" << endl;
        return;
    } 
}

/*-------------------int main -------------------*/

int main(){
    int sac=1;
    cin>>sac;
    for(int i=0;i<sac;i++){
        atom();
    }
    return 0;
}