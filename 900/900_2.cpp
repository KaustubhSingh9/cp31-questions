#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==k+1){
            cout<<"Yes"<<endl;
            continue;
        }
        map<char,int>mpp;
        for(auto x:s){
            mpp[x]++;
        }
        int odd=0;
        for(auto pair:mpp){
            if(pair.second%2!=0){
                odd++;
            }
        }
        if(odd>k+1){
            cout<<"No"<<endl;
        } else cout<<"Yes"<<endl;
        
    }
    return 0;
}