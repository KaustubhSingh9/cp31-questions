#include<bits/stdc++.h>
using namespace std;
bool divCheck(long long n){
    long long temp=n;
    while(temp){
        int rem=temp%10;
        if(rem!=0 && n%rem!=0){
            return false;
        }
        temp/=10;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        while(true){
            if(divCheck(n)){
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }
    return 0;
}