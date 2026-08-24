#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        int low=0;
        int maxLen=0;
        for(int j=0;j<n-1;j++){
            if(arr[j+1]-arr[j]>k){
                maxLen=max(maxLen,j-low+1);
                low=j+1;
            }
        }
        maxLen=max(maxLen,n-low);
        if(maxLen==0){
            maxLen=n;
        }
        cout<<n-maxLen<<endl;
    }
    return 0;
}