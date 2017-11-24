#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,m,a,b,cost,rem;
	cin >> n >> m >> a >> b;
	
	if(b < a*m){
		cost = (n/m) * b;
		rem=n%m;
		if(rem*a < b) cost+=rem*a;
		else cost+=b;
		cout << cost << endl;
	}
	
	else cout << a*n << endl;
	
	return 0;
}
