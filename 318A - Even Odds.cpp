#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n,k,value;
	cin >> n >> k;
	
	if(n%2==0) n=n/2; // if even
	else n=(n/2)+1; // if odd
	
	if(k<=n){
		value=1+(k-1)*2; // from arithmatic formula: nth terms=a+(n-1)*d;
	}
	else{
		value=2+(k-1-n)*2;
	}
	cout << value << endl;
	
	return 0;
}
