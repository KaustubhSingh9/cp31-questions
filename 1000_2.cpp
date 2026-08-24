#include<bits/stdc++.h>
using namespace std;
pair<long long,bool> productFunc(vector<long long>arr,int count,int k){
    long long newPro=1;
    bool flag=false;
    for(auto x:arr){
        if((x+count)%k==0){
            flag=true;
        }
        newPro*=(x+count);
    }
    return {newPro,flag};
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        int k;
        cin>>n>>k;
        long long sum=0;
        long long sumSq=0;
        long long pro=1;
        vector<long long>arr;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int count=0;
        if(k!=4){
            int mini=0;
            bool breakL=false;
            for(int j=0;j<n;j++){
                if(arr[j]%k==0){
                    breakL=true;
                    break;
                }
                if(arr[j]%k>mini){
                    mini=arr[j]%k;
                }
            }
            if(breakL){
                cout<<0<<endl;
                continue;
            }
            cout<<k-mini<<endl;
        }
        else{
            int evenCount=0;
            bool odd1=false;
            bool breakL=false;
            for(int j=0;j<n;j++){
                if(arr[j]%4==0){
                    breakL=true;
                    break;
                }
                if(arr[j]%2==0){
                    evenCount++;
                }
                if(arr[j]%4==3){
                    odd1=true;
                }
            }
            if(breakL){
                cout<<0<<endl;
                continue;
            }
            if(evenCount>=2){
                cout<<0<<endl;
            }
            else if(evenCount==0 && odd1){
                cout<<1<<endl;
            }
            else if(evenCount==0 && !odd1){
                cout<<2<<endl;
            }
            else cout<<1<<endl;
        }
        
    }
    return 0;
}