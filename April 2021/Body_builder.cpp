#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, r;
        cin>>n>>r;
        long long int time[n], value[n];
        for(long long int i=0;i<n;i++){
            cin>>time[i];
        }
        for(long long int i=0;i<n;i++){
            cin>>value[i];
        }
        long long int maxi = value[0], tmp = value[0];
        long long int z = 0;
        for(int i = 1;i<n;i++){
            long long int x = time[i] - time[i-1];
            tmp = max(z,tmp - r*x);
            tmp += value[i];
            maxi = max(maxi,tmp);
        }

        cout<<maxi<<"\n";
    }
    return 0;
}