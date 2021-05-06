#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case>0){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float speed=k1*k2*k3*v;
        float val=100/speed;
        int result=round(val*100);
        if(result < 958){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        test_case--;
    }
}
/*
for _ in range(int(input())):
    k1,k2,k3,v = map(float, input().split())
    a = k1 * k2 * k3 * v
    b = 100/a
    b = round(b,2)
    if b < 9.58:
        print("YES")
    else:
        print("NO")

*/        