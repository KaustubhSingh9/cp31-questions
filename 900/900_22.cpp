#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int count1=0,count0=0;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            if(temp==1){
                count1++;
            }
            else if(temp==0){
                count0++;
            }
        }
        long long ans=(1LL<<count0)*count1;
        cout<<ans<<endl;
    }
    return 0;
}