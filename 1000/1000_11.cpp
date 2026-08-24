#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,d;
        cin>>n>>d;
        vector<long long >arr;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        long long ans=0;
        long long j=n-1;
        long long k=0;
        while(k<=j){
            if(arr[j]>d){
                ans++;
                j--;
                continue;
            }
            long long times=d/arr[j]+1;
            if((k+times-2)<j){
                k+=times-2;
                ans++;    
            }
            k++;
            j--;
        }
        cout<<ans<<endl;
    
    return 0;
}