#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k;
        cin>>n>>k;
        long long q;
        cin>>q;
        long long count=0;
        long long ans=0;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            if(temp<=q){
                count++;
            }else {
             if(count<k){
                count=0;
             }
             else{
                long long num=count-k+1;
                ans+=(num*(num+1))/2;
                count=0;
             }

            }
        }
        if(count>=k){
            long long num=count-k+1;
            ans+=(num*(num+1))/2;
        }
        cout<<ans<<endl;

    }
    return 0;
}