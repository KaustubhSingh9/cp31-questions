#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long x0,n;
        cin>>x0>>n;
        if(n%4==3){
            if(x0 % 2==0){
                x0+=(n+1);
            }
            else x0-=(n+1);
        }
        else if(n%4==2){
            if(x0 % 2==0){
                x0+=1;
            }
            else x0-=1;
        }
        else if(n%4==1){
            if(x0 % 2==0){
                x0-=n;
            }
            else x0+=n;
        }
        cout<<x0<<endl;
    }
    return 0;
}