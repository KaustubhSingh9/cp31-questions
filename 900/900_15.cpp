#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<long long>arr;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            arr.push_back(temp);
        }
        bool possible=true;
        long long count=0;
        for(int j=n-1;j>0;j--){
            if(arr[j]==0){
                cout<<-1<<endl;
                    possible=false;
                    break;
            }
            if(arr[j-1]>=arr[j]){
                while(arr[j-1]>=arr[j]){
                    arr[j-1]/=2;
                    count++;
                }
            }
            if(arr[j-1]==0 && j-1!=0){
                    
                }
            
        }
        if(!possible){
            continue;
        }
        cout<<count<<endl;
    }
    return 0;
}