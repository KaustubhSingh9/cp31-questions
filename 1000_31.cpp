#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxACII=0;
    int maxIndex=0;
    for(int j=0;j<n;j++){
        if(maxACII<(int)s[j]){
            maxACII=s[j];
            maxIndex=j;
        }
        if(s[j]<maxACII){
          cout<<"YES \n"<<maxIndex+1<<" "<<j+1;
          return 0;;  
        }
    }
    cout<<"NO \n";
    
    return 0;
}