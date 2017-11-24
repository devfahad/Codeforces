#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a,b;
	cin >> a >> b;
	
	int x=a,rem,tot=0,y;
	
	while(x>=b){
		rem=x%b;
		y=x/b;
		tot+=y;
		x=rem+y;
	}	
	cout << tot+a << endl;
	
	return 0;
}
