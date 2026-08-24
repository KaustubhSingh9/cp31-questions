#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b;
        cin>>a>>b;
        long long steps=INT_MAX;
        if(a==0){
            cout<<0<<endl;
            continue;
        }
        int j=0;
        if(b==1){
            j++;
        }
        
        for(j;j<=35;j++){
            long long tempA=a;
            long long currentsteps=0;
            currentsteps+=j;
            while(tempA){
                tempA/=(b+j);
                currentsteps++;
            }
            steps=min(steps,currentsteps);
        }
        cout<<steps<<endl;
    }
    
    return 0;
}