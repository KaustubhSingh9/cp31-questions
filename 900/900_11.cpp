#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<long long>arr;

        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            if(temp==1){
                temp++;
            }
            arr.push_back(temp);
          }
        
        for(int j=0;j<n-1;j++){
            if(arr[j+1]%arr[j]==0){
                arr[j+1]++;
            }
        }
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}