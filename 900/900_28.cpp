#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<long long>arr;
        for(int j=0;j<n*k;j++){
            long long temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int count=0;
        long long sum=0;
        int skip=n/2+1;
        for(int j=n*k-skip;j>=0;j-=skip){
            if(count==k) break;
            sum+=arr[j];
            count++;
        }
        
        cout<<sum<<endl;
    }
    return 0;
}