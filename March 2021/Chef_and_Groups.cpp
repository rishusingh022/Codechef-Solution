#include <bits/stdc++.h>
using namespace std;

void count_subgroup(string n,int size){
    int count=0;
    for(int i=0;i<size-1;i++){
        if(n[i] == '0' && n[i + 1] == '1'){
            count=count+1;
        }
    }
    if(n[0] == '1'){
        count=count+1;
    }
    cout<< count;    
}
int main(){
    int number_testcases;
    cin>>number_testcases;
    for(int i=0;i<number_testcases;i++){
        string str;
        cin>> str;
        count_subgroup(str,str.size());
    }
}