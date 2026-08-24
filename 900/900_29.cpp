#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>arr;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int ind1=0,ind2,ind3;
        bool flag1=false;
        bool flag2=false;
        int mini=arr[0];
        int maxi=0;
        for(int j=0;j<n;j++){
            if(arr[j]<mini && !flag1){
                mini=arr[j];
                ind1=j;
            }
            else if (arr[j]>mini && !flag1){
                flag1=true;
                maxi=arr[j];
                ind2=j;
            }
            else if(arr[j]>maxi){
                maxi=arr[j];
                ind2=j;
            }
            else if(arr[j]<maxi && flag1){
                flag2=true;
                ind3=j;
                break;
            }
        }
        if(flag1 && flag2){
            cout<<"YES \n"<<ind1+1<<" "<<ind2+1<<" "<<ind3+1<<endl;
            
        }else cout<<"NO"<<endl;
    }
    return 0;
}