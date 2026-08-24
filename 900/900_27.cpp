#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,x;
        cin>>n>>x;
        long long sum=0;
        long long maxi=0;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            sum+=temp;
            if(temp%x==0){
                maxi+=(temp/x);
            }
            else maxi+=(temp/x)+1;
        }
        long long mini;
        if(sum%x==0){
            mini=sum/x;
        } else mini=sum/x+1;
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}