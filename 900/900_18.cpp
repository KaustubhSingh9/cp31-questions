#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
       
        if((c+a)%2 ==0 && (c+a)/2 % b==0){
            cout<<"YES"<<endl;
        }
        else if((2*b-a)>0 && (2*b-a) % c ==0){
            cout<<"YES"<<endl;
        }
        else if((2*b-c)>0 && (2*b-c) % a ==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}