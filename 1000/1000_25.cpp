#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        unordered_set<long long>arr;
        bool repeat=false;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            if(arr.find(temp)!=arr.end()){
                repeat=true;
            }
            else arr.emplace(temp);
            
        }
        if(repeat){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

    }
    return 0;
}