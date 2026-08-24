#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int maxPower=log2(n-1);
        int maxNum=pow(2,maxPower);
        vector<int>ans;
        int j;
        for(j=n-1;;j--){
            if(j>=maxNum){
                ans.push_back(j);
                continue;
            }
            else break;
        }
        ans.push_back(0);
        while(j>=1){
            ans.push_back(j);
            j--;
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}