#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long , int>p1 , pair<long long , int>p2){
    if(p1.first>p2.first || p1.first==p2.first && p1.second<p2.second){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        long long k;
        cin>>n>>k;
        vector<pair<long long ,int>>ans;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            long long rem=temp%k;
            if(rem==0){
                rem=k;
            }
            ans.push_back({rem,j});
        }
        sort(ans.begin(),ans.end(),comp);
        for(auto x : ans){
            cout<<x.second+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}