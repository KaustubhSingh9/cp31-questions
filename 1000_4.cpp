#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n;
        int minIndex;
        int mini2=INT_MAX;
        int mini1=INT_MAX;
        long long sum=0;
        for(int j=0;j<n;j++){
            cin>>m;
            vector<int>arr1;
            for(int k=0;k<m;k++){
                int temp;
                cin>>temp;
                arr1.push_back(temp);
            }
            sort(arr1.begin(),arr1.end());
            if(arr1[1]<mini2){
                minIndex=j;
                mini2=arr1[1];
            }
            mini1=min(arr1[0],mini1);
            sum+=arr1[1];
            
        }
        sum-=mini2;
        sum+=mini1;
        cout<<sum<<endl;
        

    }
    return 0;
}