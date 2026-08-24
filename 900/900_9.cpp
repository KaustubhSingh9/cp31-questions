#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ans=0;
        for(int j=1;j<=n;j++){
            int temp;
            cin>>temp;
            int dist=abs(temp-j);
            ans=__gcd(ans,dist);
            
        }
        cout<<ans<<endl;
    }
    return 0;
}