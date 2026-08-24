#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,q;
        cin>>n>>q;
        vector<long long>prefixSum;
        prefixSum.push_back(0);
        long long preSum=0;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            preSum+=temp;
            prefixSum.push_back(preSum);
        }
       
        
        for(int j=0;j<q;j++){
            int l,r,k;
            cin>>l>>r>>k;
            long long sum=prefixSum[n];
            sum+=(k*(r-l+1)-prefixSum[r]+prefixSum[l-1]);
            if(sum%2!=0){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}