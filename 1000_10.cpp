#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        long long lastG=-1;
        long long lastChar=-1;
        long long ans=0;
        for(int j=n-1;j>=0;j--){
            if(s[j]==c){
                if(lastG==-1){
                    lastChar=j;
                }
                else{
                    ans=max(ans,lastG-j);
                }
            }
            if(s[j]=='g'){
                lastG=j;
            }
        }
        if(lastChar!=-1) ans=max(ans,n-lastChar+lastG);
        cout<<ans<<endl;
    }
    return 0;
}