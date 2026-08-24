#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<long long>arr;
        unordered_map<long long, long long>mpp;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr.push_back(temp);
            mpp[temp]++;
        }
        vector<long long>ans;
        bool check=true;
        for(int j=0;j<n;){
            if(mpp[arr[j]]<2){
                check=false;
                break;
            }
            ans.push_back(mpp[arr[j]]+j);
            mpp[arr[j]]--;
            while(mpp[arr[j]]){
                ans.push_back(j+1);
                j++;
                mpp[arr[j]]--;
            }
            j++;
        }
        if(!check){
            cout<<-1<<endl;
        }
        else{
            for(auto x:ans){
                cout<<x<<" ";
            }
            cout<<endl;
        }


    }
    return 0;
}