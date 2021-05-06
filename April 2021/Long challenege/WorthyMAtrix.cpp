#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    int t;
    cin>>t;
    if(t>=1 && t<=10){
        while(t--){
            ll n,m;
            ld k;
            cin>>n>>m>>k;
            ll B=1;
            ll count=0;
            ld sum=0;
            ll arr[n][m]={};
            ll final_arr[n+1][m+1]={};
            if((n>=1 && n<=1000000)&&(m>=1 && m<=1000000)&&(n<=m)&&(k>=0 && k<=1000000000)){
                for(ll i=1;i<n+1;i++){
                    for(ll j=1;j<m+1;j++){
                        ll c;
                        cin>>c;
                        if(c>=0 && c<=1000000000)
                            arr[i-1][j-1]=c;
                        final_arr[i][j]=arr[i-1][j-1]+final_arr[i-1][j]+final_arr[i][j-1]-final_arr[i-1][j-1];
                    }
                }
                while(B<n+1 && B<m+1){
                    for(ll i=B;i<n+1;i++){
                        for(ll j=B;j<m+1;j++){
                            if(i-B>=0 && j-B>=0){
                                sum = final_arr[i][j] - final_arr[i-B][j]-final_arr[i][j-B]+ final_arr[i-B][j-B];
                                if((sum/(B*B))>=k)
                                        {
                                            count++;
                                        }
                            }
                        }
                    }
                    B++;
                } 
                cout<<count<<endl; 
            } 
        }
        return 0;
    }
}