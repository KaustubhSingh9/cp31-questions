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
        int opening=0;
        int closing=0;
        int extra=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='('){
                opening++;
            }
            if(s[j]==')'){
                if(opening>0)
                opening--;
                else extra++;
            }
        }
        
        cout<<extra<<endl;
    }
    return 0;
}