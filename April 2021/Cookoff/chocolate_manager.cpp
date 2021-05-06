#include <bits/stdc++.h>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case>0){
        long long int n,x;
        cin>>n>>x;
        vector<long long int> flavors;
        for(int i=0;i<n;i++){
            long long temp;
            cin>>temp;
            flavors.push_back(temp);
        }

        vector<long long int> v=flavors;
        vector<long long int>::iterator ip;
        
        sort(v.begin(),v.end());
        ip = std::unique(v.begin(), v.begin() + n);
        v.resize(std::distance(v.begin(), ip));
        
        long long int final_answer;
        int unique_flovors=v.size();
        int dublicate_flours=n-unique_flovors;
        
        if(dublicate_flours>=x){
            cout<<unique_flovors<<endl;
        }
        else{
            final_answer=abs(unique_flovors-abs(dublicate_flours-x));
            cout<<final_answer<<endl;
        }
        test_case--;
    }
}
