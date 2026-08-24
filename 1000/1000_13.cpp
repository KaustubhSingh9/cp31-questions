#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        vector<long long>arr;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int change=0;
        long long minR,maxR;
        for(int j=0;j<n;j++){
            if(j==0){
                minR=arr[j]-x;
                maxR=arr[j]+x;
                continue;
            }
            long long currMin=arr[j]-x;
            long long currMax=arr[j]+x;
            if(currMin>maxR || currMax < minR){
                change++;
                maxR=currMax;
                minR=currMin;
            }
            else{
                maxR=min(maxR,currMax);
                minR=max(minR,currMin);
            }
        }
        cout<<change<<endl;

    }
    return 0;
}