#include <bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case>0){
        int a,b,c,amin,bmin,cmin,t;
        cin>>amin>>bmin>>cmin>>t>>a>>b>>c;
        if(a>=amin && b>=bmin && c>=cmin){
            if(a+b+c>=t){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        test_case--;
    }
}