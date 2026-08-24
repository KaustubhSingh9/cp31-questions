#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int count0=0;
        int count1=0;
        int n=s.size();
        for(int j=0;j<n;j++){
            if(s[j]=='0'){
                count0++;
            }
            else count1++;
        }
        int j;
        for(j=0;j<s.size();j++){
            if(s[j]=='1' && count0>0){
                count0--;
            }
            else if(s[j]=='0' && count1>0){
                count1--;
            }
            else break;
        }
        
        cout<<n-j<<endl;

    }
    return 0;
}