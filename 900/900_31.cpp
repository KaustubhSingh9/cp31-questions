#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n%3!=0){
            cout<<-1<<endl;
            continue;
        }
        int count6=0;
        while(n%6==0){
            count6++;
            n/=6;
        }
        int count3=0;
        while(n%3==0){
            count3++;
            n/=3;
        }
        if(n==1){
            cout<<count6 + 2*count3 <<endl;
        }
        else cout<<-1<<endl;

    }
    return 0;
}