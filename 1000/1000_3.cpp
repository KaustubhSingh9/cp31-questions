#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long ,long long>p1, pair<long long ,long long>p2){
    if(p1.second<p2.second){
        return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,p;
        cin>>n>>p;
        vector<long long>arr1;
        vector<long long>arr2;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr1.push_back(temp);
        }
         
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr2.push_back(temp);
        }
        vector<pair<long long ,long long>>arr3;
        for(int j=0;j<n;j++){
            arr3.push_back({arr1[j],arr2[j]});
        }
        sort(arr3.begin(),arr3.end(),comp);
        long long ans = p;
        long long notified = 1;

        for(int j = 0; j < n; j++){
            if(arr3[j].second >= p || notified >= n){
                break;
            }
            long long take = min(arr3[j].first, n - notified);
            ans += take * arr3[j].second;
            notified += take;
        }
        if(notified < n){
            ans += (n - notified) * p;
        }
        cout<<ans<<endl;

    }
    return 0;
}