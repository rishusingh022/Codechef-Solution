#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        int count_0=0;
        int count_1=0;
        int j=0;
        for(int i=0;i<l;i++){
            if(s[i]=='0'){
                count_0++;
            }
            else{
                count_1++;
            }
            if(count_1>=count_0){
                j=1;
                break;
            }
        }
        if(j==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}