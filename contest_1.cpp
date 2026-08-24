#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || b==c || c==a){
            cout<<0<<endl;
            continue;
        }
        
        if(c>b && b>a){
            cout<<min(c-b,b-a)<<endl;
            continue;
        }
        if(c>a && a>b){
            cout<<min(c-a,a-b)<<endl;
            continue;
        }
        if(b>c && c>a){
            cout<<min(b-c,c-a)<<endl;
            continue;
        }
        if(b>a && a>c){
            cout<<min(b-a,a-c)<<endl;
            continue;
        }
        if(a>c && c>b){
            cout<<min(a-c,c-b)<<endl;
            continue;
        }
        if(a>b && b>c){
            cout<<min(a-b,b-c)<<endl;
            continue;
        }
    

    }
    return 0;
}