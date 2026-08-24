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
        int maxDiff=arr[n-1]-arr[0];
        int maxi=arr[0];
        int mini=arr[0];
        for(int j=1;j<n;j++){
            maxDiff=max(arr[j]-arr[0],maxDiff);
        }
        for(int j=0;j<n-1;j++){
            maxDiff=max(arr[n-1]-arr[j],maxDiff);
        }
        for(int j=0;j<n-1;j++){
            maxDiff=max(arr[j]-arr[j+1],maxDiff);
        }
        
        cout<<maxDiff<<endl;
    }
    return 0;
}