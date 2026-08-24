#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        long long greatDiv=1;
        long long root=sqrt(n);
        for(int j=2;j<=root;j++){
            if(n%j==0){
                greatDiv=n/j;
                break;
            }
        }
        cout<<greatDiv<<" "<<n-greatDiv<<endl;

    }
    return 0;
}