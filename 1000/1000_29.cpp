#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b;
        cin>>a>>b;
        long long mini=min(a,b);
        long long maxi=max(a,b);
        if(maxi%mini!=0){
            cout<<-1<<endl;
            continue;
        }
        long long div=maxi/mini;
        if ((div & (div - 1)) != 0) {
            cout <<-1<<"\n";
            continue;
        }
        int k = __builtin_ctzll(div);
        int ans=(k + 2)/3;
        cout<<ans<<"\n";
    }
    return 0;
}