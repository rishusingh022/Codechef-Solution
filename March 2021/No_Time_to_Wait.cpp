#include<iostream>
using namespace std;
int main(){
    int x,h,n;
    cin>>n>>h>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if((arr[i]+x)>=h){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}