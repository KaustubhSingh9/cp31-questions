#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<int>arr;
        long long time=b;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            if(temp<a){
                time+=temp;
            }
            else{time+=a-1;}
        }
        cout<<time<<endl;
        
    }
    return 0;
}