#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxLen=1;
        int currentLen=1;
        for(int j=1;j<n;j++){
           if (s[j] == s[j - 1]) {
            currentLen++;
            } else {
            maxLen = max(maxLen, currentLen);
            currentLen = 1; 
            }
        }
        maxLen=max(maxLen,currentLen);
        
        cout<<maxLen+1<<endl;
    }
    return 0;
}