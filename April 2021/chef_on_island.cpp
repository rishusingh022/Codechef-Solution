#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        float xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        float xn=x/xr;
        float yn=y/yr;
        float nn=min(xn,yn);
        if(nn>=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}