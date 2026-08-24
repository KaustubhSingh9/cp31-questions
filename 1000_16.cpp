#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,r,b;
        cin>>n>>r>>b;
        int groups=b+1;
        int q=r/groups , extra=r%(b+1);
        string ans="";
        for(int j=0;j<groups;j++){
            int add=q;
            if(extra){
                add++;
                extra--;
            }
            ans+=string(add,'R');
            if(b){
                ans+='B';
                b--;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}