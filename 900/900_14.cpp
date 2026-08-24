#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        if(n%4==1 || n%4==3 || n==2){
            cout<<-1<<endl;
            continue;
        }

        if(n%4==0){
            
            if(n%6==0){
                cout<<n/6<<" ";
            }
            else if(n%6==4){
                cout<<(n-4)/6+1<<" ";
            }
            else{
                cout<<(n-8)/6+2<<" ";
            }
            cout<<n/4<<endl;
        }
        else{
            
            if(n%6==0){
                cout<<n/6<<" ";
            }
            else if(n%6==4){
                cout<<(n-4)/6+1<<" ";
            }
            else{
                cout<<(n-8)/6+2<<" ";
            }
            cout<<(n-6)/4+1<<endl;
        }
    }
    return 0;
}