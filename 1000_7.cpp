#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        vector<long long>hashArr1(2*n+2,0);
        vector<long long>hashArr2(2*n+2,0);
        hashArr1.push_back(0);
        hashArr2.push_back(0);
        vector<int>arr1;
        vector<int>arr2;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr1.push_back(temp);

        }
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr2.push_back(temp);
        }
        for(int j=0;j<n;){
            long long count=1;
            while(j+1<n && arr1[j+1]==arr1[j]){
                count++;
                j++;
            }
            hashArr1[arr1[j]]=max(hashArr1[arr1[j]],count);
            j++;
        }
        for(int j=0;j<n;){
            long long count=1;
            while(j+1<n && arr2[j+1]==arr2[j]){
                count++;
                j++;
            }
            hashArr2[arr2[j]]=max(hashArr2[arr2[j]],count);
            j++;
        }
        long long ans=0;
        for(int j=1;j<=2*n;j++){
            ans=max(ans,hashArr1[j]+hashArr2[j]);
        }
        cout<<ans<<endl;
        

    }
    return 0;
}