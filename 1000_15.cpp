#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>preB(n,0);
        int totalB=0;
        for(int j=0;j<n;j++){
            if(s[j]=='B'){
                totalB++;
            }
            preB[j]=totalB;

        }
        bool isZero=false;
        int ans=k-(preB[k-1]);
        for(int j=1;j<=n-k;j++){
            if(ans<0){
                isZero=true;
                break;
            }
            int rem=k-(preB[j+k-1]-preB[j-1]);
            ans=min(rem,ans);
        }
        if(isZero){
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }
    return 0;
}