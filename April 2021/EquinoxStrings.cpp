#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long Sarthak_points=0,Anuradha_points=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            //EQUINOX
            if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X'){
                Sarthak_points+=a;
            }
            else{
                Anuradha_points+=b;
            }
        }
        if(Sarthak_points==Anuradha_points){
            cout<<"DRAW"<<endl;
        }
        else if(Sarthak_points>Anuradha_points){
            cout<<"SARTHAK"<<endl;
        }
        else{
            cout<<"ANURADHA"<<endl;
        }
    }
    return 0;
}