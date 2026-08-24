#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        int low=1;
        while(n%low==0){
            low++;
        }
        cout<<low-1<<endl;
    }
    return 0;
}