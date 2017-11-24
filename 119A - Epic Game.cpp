#include<bits/stdc++.h>
using namespace std;

int euclid_gcd(int x, int y){
	int dividend=x;
	int divisor=y;
	int remainder;
	while(divisor!=0){
		remainder=dividend%divisor;
		dividend=divisor;
		divisor=remainder;
	}
	return dividend;
}

int main(){
	
	int a,b,n,i=0,x,y;
	cin >> a >> b >> n;
	
	while(true){
		i++;
		if(i%2==1){
			x=euclid_gcd(a,n);
			if(n>=x) n=n-x;
			else break;
		}
		else{
			y=euclid_gcd(b,n);
			if(n>=y) n=n-y;
			else break;
		}
		//cout << n << " " << endl;
	}
	
	if(i%2==1) cout << "1" << endl; // simon loses if odd
	else cout << "0" << endl;
	return 0;
}
