#include <bits/stdc++.h>
using namespace std;
bool solve(string t, string s) {
    if(s == t)
      return true;
    long long int  n = s.size();
    long long int  m = t.size();
    long long int  j = 0;
    for(long long int  i = 0; i < n; i++){
        if(t[j] == s[i])
        j++;
        if(j == t.size())
        return true;
    }
    return false;
}
//order of log n with base 10
long long int  binaryToDecimal(long long int  n)
{
    long long int  num = n;
    long long int  dec_value = 0;
    long long int  base = 1;
    long long int  temp = num;
    while (temp) {
        long long int  last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}    
// order of log n with base 2
long long int  convertDecimalToBinary(long long int  n){
    long long int  binaryNumber = 0;
    long long int  remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int  main(){
    long long int  t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stringstream geek(s);
        long long int  a=0;
        geek>>a;
        long long int  b=binaryToDecimal(a);
        long long int j=0;
        for(long long int  i=0;i<=b+1;i=i++){
            long long int  f=convertDecimalToBinary(i);
            stringstream ss;  
            ss<<f;  
            string sub;  
            ss>>sub;
            bool check=solve(sub,s);
            if(!(check)){
                cout<<sub<<endl;
                break;
            }
        } 
    }  
}