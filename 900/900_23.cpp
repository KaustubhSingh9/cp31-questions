#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long e1;
        cin>>e1;
        long long ans=e1;
        for(int j=1;j<n;j++){
            long long temp;
            cin>>temp;
            ans=ans&temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}
