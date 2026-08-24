#include<bits/stdc++.h>
using namespace std;
int countSteps(int n,int maxi){
    bool flag=true;
    int count=0;
    while(flag){
        if(maxi<n){
            count++;
        }
        if(maxi<=n-maxi){
            count+=maxi;
            maxi*=2;
        }else{
            count+=(n-maxi);
            flag=false;
        }

    }
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        map<long long,int>mpp;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            mpp[temp]++;
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int maxi=0;
        for(auto x:mpp){
            maxi=max(maxi,x.second);
        }
        cout<<countSteps(n,maxi)<<endl;
    }
    return 0;
}