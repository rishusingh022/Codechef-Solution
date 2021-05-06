#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case>0){
        int n;
        cin>>n;
        if(n==0){
            cout<<"0"<<endl;
            break;
        }
        else if(n==1){
            cout<<"20"<<endl;
            break;
        }
        else if(n==2){
            cout<<"34"<<endl;
            break;
        }
        int num_of_stack=floor(n/2);
        int ans=34*num_of_stack;
        if(n%2==0){
            cout<<ans<<endl;
        }
        else{
            cout<<ans+20;
        }
        test_case--;
    }
} 
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n==1)
            cout<<20<<endl;
        else if(n==2)
            cout<<36<<endl;
        else if(n==3)
            cout<<51<<endl;
        else if(n==4)
            cout<<60<<endl;
        else
        {
            long long sum = 0;
            long long r = n%4;
            sum = n*11;
            if(r == 1)
                sum += 21;
            else if(r== 2)
                sum += 22;
            else if(r==3)
                sum += 22;
            else
                sum += 16;
            cout<<sum<<endl;
        }
    }
    return 0;
}
*/