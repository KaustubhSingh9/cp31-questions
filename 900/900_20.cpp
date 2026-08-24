#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int n=s.size();
        if(s[0]=='a' && s[n-1]=='a' || s[0]=='b' && s[n-1]=='b' ){
            cout<<s<<endl;
        }
        else if(s[0]=='a' && s[n-1]=='b'){
            s[0]='b';
            cout<<s<<endl;
        }
        else{
            s[0]='a';
            cout<<s<<endl;
        }
    }
    return 0;
}