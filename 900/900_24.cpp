#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b;
        cin>>a>>b;
        long long diff=abs(a-b);
        if(diff==0){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long steps;
        steps=min(b%diff , diff-(b%diff));
        cout<<diff<<" "<<steps<<endl;


    }
    return 0;
}