#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string a,b;
        cin>>a>>b;
        int n1=a.size();
        int n2=b.size();
        int maxSize=0;
        for(int i=0;i<n1;i++){
            string temp="";
            
            for(int j=i;j<n1;j++){
                temp+=a[j];
                int tempSize=temp.size();
                string temp2="";
                for(int k=0;k<n2;k++){
                    temp2+=b[k];
                    if(temp2.size()==tempSize){
                        if(temp==temp2){
                            maxSize=max(maxSize,tempSize);
                        }
                        temp2="";
                        k-=tempSize-1;
                    }
                }
            }
            temp="";
        }
        
        cout<<n1+n2-2*maxSize<<endl;
    }
    return 0;
}