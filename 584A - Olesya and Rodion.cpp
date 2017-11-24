// use string to solve this

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,t,m;
	
	cin >> n >> t;
	m=n;
	long long val=1;
	
	while(n-- && n!=0){
		val=val*10;
	}
	//cout << val;
	
	while(val%t!=0) val+=1;
	
	if(m==1 && t==10) cout << "-1" << endl;
	else if(val%t==0) cout << val << endl;
	else cout << "-1" << endl;
	
	return 0;
}
