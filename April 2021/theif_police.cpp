#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    int x,y;
	    int a,b;
	    cin>>n>>m>>x>>y>>a>>b;
	    int min_thief=(n-x)+(m-y);
	    int min_police=(n-a)+(m-b) -min(n-a,m-b);
	    if(min_thief<=min_police){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
