#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>arr;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}