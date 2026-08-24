#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        map<char,int>mpp1;
        map<char,int>mpp2;
        for(char c:s){
            mpp1[c]++;
        }
        for(char c:t){
            mpp2[c]++;
        }
        bool possible=true;
        int lastFound=0;
        for(int j=0;j<t.size();j++){
            if(mpp1[t[j]]==0){
                possible=false;
                break;
            }
            int nth=mpp1[t[j]]-mpp2[t[j]]+1;
            if(nth<=0){
                possible=false;
                break;
            }
            int current=0;
            while(nth){
                if(current==s.size()){
                    possible=false;
                    break;
                }
                if(s[current]==t[j]){
                    nth--;
                }
                current++;
            }
            if(lastFound>current-1){
                possible=false;
                break;
            }
            lastFound=current-1;
            mpp2[t[j]]--;
        }
        if(possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}