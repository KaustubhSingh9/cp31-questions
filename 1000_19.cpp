#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        vector<long long>ans(n+1,0);
        multimap<long long,long long>mpp;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            mpp.insert({temp,j+1});
        }
        long long sum=0;
        int j=1;
        bool pos=true;
        for(auto it=mpp.rbegin();it!=mpp.rend();++it){
            sum+=j*(it->first);
            if(pos){
                ans[it->second]=j;
                pos=false;
            }
            else {
                ans[it->second]=-j;
                j++;
                pos=true;
            }
            
        }
        cout<<2*sum<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}