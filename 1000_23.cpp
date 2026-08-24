#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long d;
        cin>>d;
        int start=1+d;
        int d1;
        while(true){
            bool found=true;
            for(int i=2;i*i<=start;i++){
                if(start%i==0){
                    found=false;
                    break;
                }
                
            }
            if(found){
                d1=start;
                break;
            }else start++;
        }
        start=d1+d;
        int d2;
        while(true){
            bool found=true;
            for(int i=2;i*i<=start;i++){
                if(start%i==0){
                    found=false;
                    break;
                }
                
            }
            if(found){
                d2=start;
                break;
            }else start++;
        }
        cout<<d1*d2<<endl;

    }
    return 0;
}