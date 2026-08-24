#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b;
        cin>>a>>b;
        long long rem=(a-1)%4;
        long long xoor;
        if(rem==0) xoor=a-1;
        else if(rem==1) xoor=1;
        else if(rem==2) xoor=a;
        else xoor=0;
        if(xoor==b){
            cout<<a<<endl;
        }
        else if((xoor^a)==b){
            cout<<a+2<<endl;
        }
        else cout<<a+1<<endl;
    }
    return 0;
}