#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n%2!=0){
            cout<<"Yes"<<endl;
        }
        else{
            long long log=log2(n);
            long double logNew=log2(n);
            if(log==logNew){
                cout<<"No"<<endl;
            }
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}