#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr;
        int sum=0;
        int countNegative=0;
        int mini=101;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                int temp;
                cin>>temp;
                mini=min(mini,abs(temp));
                sum+=abs(temp);
                if(temp<0){
                    countNegative++;
                }
            }
        }
        if(countNegative%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-(2*mini)<<endl;
        }
    }
    return 0;
}