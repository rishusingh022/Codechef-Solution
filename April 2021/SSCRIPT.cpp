#include<iostream>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case>0){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                count++;
            }
            else{
                ans=max(count,ans);
                count=0;
            }
            ans=max(ans,count);
        }
        if(ans>=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        test_case--;
    }
}      

/* oder of n^2
#include<iostream>
using namespace std;
bool check(string s,int i,int j){
    for(int k=i;k<=j;k++){
        if(s[k]!='*'){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int test_case;
    cin>>test_case;
    while(test_case>0){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0;i<n && flag==false;i++){
            if(s[i]=='*'){
                if(s[i+k-1]=='*'){
                    flag=check(s,i,i+k-1);
                }
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        test_case--;
    }
}      
*/