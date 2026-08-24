#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int segments=0;
        vector<long long>arr;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int count=0;
        int last=n-1;
        int first=0;
        while(last>=0){
            if(arr[last]==0){
                last--;
            }
            else break;
        }
        if(last==-1){
            cout<<0<<endl;
            continue;
        }
        while(first<=n-1){
            if(arr[first]==0){
                first++;
            }
            else break;
        }
        bool ans2=false;
        for(int j=first;j<=last;j++){
            if(arr[j]==0){
                ans2=true;
                break;
            }
        }
        if(ans2){
            cout<<2<<endl;
        }else {
            cout<<1<<endl;
        }
        
    }
    return 0;
}