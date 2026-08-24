#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,q;
        cin>>n>>q;
        vector<int>arr1;
        
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr1.push_back(temp);
        }
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            if(arr1[j]<temp){
                arr1[j]=temp;
            }
        }
        for(int j=n-2;j>=0;j--){
        if(arr1[j]<arr1[j+1]){
            arr1[j]=arr1[j+1];
            }
        }
        vector<long long>prefixSum;
        prefixSum.push_back(0);
        long long preSum=0;
        for(int j=0;j<n;j++){
            preSum+=arr1[j];
            prefixSum.push_back(preSum);
        }
        vector<long long>sumArr;
        for(int k=0;k<q;k++){
            int l,r;
            cin>>l>>r;
            long long sum=prefixSum[r]-prefixSum[l-1];
            sumArr.push_back(sum);
        }
        for(auto x:sumArr){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}