#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long x,y;
        cin>>x>>y;
        vector<int>xcoor1;
        vector<int>xcoor2;
        vector<int>ycoor1;
        vector<int>ycoor2;
        int x1,x2,y1,y2;
        cin>>x1;
        for(int j=0;j<x1;j++){
            int temp;
            cin>>temp;
            xcoor1.push_back(temp);
        }
        cin>>x2;
        for(int j=0;j<x2;j++){
            int temp;
            cin>>temp;
            xcoor2.push_back(temp);
        }
        cin>>y1;
        for(int j=0;j<y1;j++){
            int temp;
            cin>>temp;
            ycoor1.push_back(temp);
        }
        cin>>y2;
        for(int j=0;j<y2;j++){
            int temp;
            cin>>temp;
            ycoor2.push_back(temp);
        }
        int maxDiffX=max(*max_element(xcoor1.begin(),xcoor1.end())-*min_element(xcoor1.begin(),xcoor1.end()),*max_element(xcoor2.begin(),xcoor2.end())-*min_element(xcoor2.begin(),xcoor2.end()));
        int maxDiffY=max(*max_element(ycoor1.begin(),ycoor1.end())-*min_element(ycoor1.begin(),ycoor1.end()),*max_element(ycoor2.begin(),ycoor2.end())-*min_element(ycoor2.begin(),ycoor2.end()));
        
        cout<<max(x*maxDiffY , y*maxDiffX)<<endl;
    }
    return 0;
}