#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        string s=to_string(n);
        bool found5=false;
        bool found0=false;
        int count=0;
        for(int j=s.size()-1;j>=0;j--){
            if((s[j]=='5' || s[j]=='0') && found0){
                count=(s.size()-1-j)-1;
                cout<<count<<endl;
                break;
            }
            if((s[j]=='2' || s[j]=='7') && found5){
                count=(s.size()-1-j)-1;
                cout<<count<<endl;
                break;
            }
            if(s[j]=='5'){
                found5=true;
            }
            if(s[j]=='0'){
                found0=true;
            }
            
        }
        
    }
    return 0;
}