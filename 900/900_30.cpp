#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int count0=0;
        int count1=0;

        for(int j=0;j<s.size();j++){
            if(s[j]=='0'){
                count0++;
            }
            else if (s[j]=='1')
            {
                count1++;
            }
        }
        int mini=min(count0,count1);
        if(mini%2==0){
            cout<<"NET"<<endl;
        }else cout<<"DA"<<endl;
    }
    return 0;
}