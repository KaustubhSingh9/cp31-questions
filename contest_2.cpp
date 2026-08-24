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
        int  j=1;
        if(s.size()==3){
            s.erase(1,1);
            if(s[0]==s[1]){
                s.erase(1,1);
            }
        }
        while(j<s.size()-1){
            if(j+1<s.size() && s[j+1]==s[j]){
                s.erase(j+1,1);
            }
            j++;
        }
        
        if(s.size()<=3 && s[0]!=s[1]){
            cout<<s.size()<<endl;
            continue;
        }
        bool flag=false;
        for(j=1;j<s.size()-1;j++){
            if(s[j-1]==s[j+1]){
                s.erase(j,1);
                flag=true;
                break;
            }
            j++;
        }
        if(flag){
            cout<<s.size()-1<<endl;
        }else cout<<s.size()-1<<endl;
        
        
        
    }
    return 0;
}