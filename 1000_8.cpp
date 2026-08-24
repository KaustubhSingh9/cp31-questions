#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,long long>mpp1;
        mpp1[s[0]]++;
        long long  sizeB=0;
        unordered_map<char,long long>mpp2;
        for(int j=1;j<n;j++){
            
            if(mpp2[s[j]]==0)sizeB++;
            mpp2[s[j]]++;
        }
        long long  sizeA=1;
        long long  ans=sizeA+sizeB;
        for(int j=1;j<n-1;j++){
            if(mpp1[s[j]]==0){
                sizeA++;
                mpp1[s[j]]++;
            }
            if(mpp2[s[j]]==1){
                sizeB--;
            }
            mpp2[s[j]]--;
            
            ans=max(ans,sizeA+sizeB);
        }
        
        
        cout<<ans<<endl;
    }
    return 0;
}