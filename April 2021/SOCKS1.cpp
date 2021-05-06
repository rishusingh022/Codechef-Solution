#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=1 && a<=10 && b>=1 && b<=10 && c>=1 && c<=10){
        if(a==b||a==c||b==c){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
}