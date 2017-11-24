#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int y,w,n,d,max;
	cin >> y >> w;
	
	if(y > w) max=y;
	else max=w;
	
	n=6-max+1;// cout << n << endl;
	d=6;// cout << d << endl;
	
	for(int i = 2; i <= 6; i++){
		if(n%i==0 && d%i==0){
			n=n/i;
			d=d/i;
		}
	}
	
	double p = double(n)/double(d); // p is the probability of winning..
	//cout << p << endl;
	if(p == 0) cout << "0/1" << endl;
	else cout << n << "/" << d << endl;
	
	return 0;
}
