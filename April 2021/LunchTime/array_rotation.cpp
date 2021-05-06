#include<iostream>
#include <numeric> 
using namespace std;
#define mod 1000000007
#define int long long  
int32_t main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum=(sum+x)%mod;
    }
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        sum=(sum*2)%mod;
        cout<<sum<<endl;
    }
    return 0;
}