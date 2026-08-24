#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        set<vector<int>>kingCor;
        set<vector<int>>queenCor;
        kingCor.insert({xk+a,yk+b});
        kingCor.insert({xk-a,yk+b});
        kingCor.insert({xk+a,yk-b});
        kingCor.insert({xk-a,yk-b});

        kingCor.insert({xk+b,yk+a});
        kingCor.insert({xk-b,yk+a});
        kingCor.insert({xk+b,yk-a});
        kingCor.insert({xk-b,yk-a});
        
        queenCor.insert({xq+a,yq+b});
        queenCor.insert({xq-a,yq+b});
        queenCor.insert({xq+a,yq-b});
        queenCor.insert({xq-a,yq-b});

        queenCor.insert({xq+ b,yq+a});
        queenCor.insert({xq- b,yq+a});
        queenCor.insert({xq+ b,yq-a});
        queenCor.insert({xq- b,yq-a});
        
        int count=0;
        for(auto x:kingCor){
            if(queenCor.find(x)!=queenCor.end()){
                count++;
            }
        }

    cout<<count<<endl;
    }
    return 0;
}