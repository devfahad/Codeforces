#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a,min=124,b,c;
	cin >> a;
	
	if(a >= 0) cout << a << endl;
	else{
		if((a/10)<min) min=a/10;
		
		b=(a%10);
		c=(a/100)*10+b;
		if(c>min) min=c; 
		
		//cout << a << endl << b << endl << c << endl;
		cout << min << endl;
	}
	
	return 0;
}
