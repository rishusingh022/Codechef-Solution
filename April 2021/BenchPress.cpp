#include<iostream>
#include<map>
using namespace std;
#define int long long  
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,w,wr;
        cin>>n>>w>>wr;
        map<int,int> mp;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(wr>=w){
            cout<<"YES"<<endl;
        }
        else{
            int required=w-wr;
            for(int i=0;i<n;i++){
                if(mp[arr[i]]>=2){
                    int count=mp[arr[i]];
                    if(count%2==0){
                        required-=count*arr[i];
                    }
                    else{
                        required-=(count-1)*arr[i];
                    }
                    mp[arr[i]]=0; 
                }
                if(required<=0){
                    break;
                }
            }
            if(required<=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }    
    }
    return 0;
}