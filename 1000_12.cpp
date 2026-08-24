#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        if((k*b)>s || ((k*b)<s && (k*b+(n)*(k-1))<s)){
            cout<<-1<<endl;
            continue;
        }
        vector<long long>arr(n,0);
        long long rem=s;
        arr[0]=k*b;
        rem-=k*b;
        for(long long in=0;in<n && rem>0;in++){
            long long add=min(rem,k-1);
            arr[in]+=add;
            rem-=add;
        }
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}