#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a,b,c,max=0,x1,x2,x3,x4,x5,x6;
	cin >> a >> b >> c;
	
	x1=a+b+c; if(max<x1) max=x1;
	x2=a*b*c; if(max<x2) max=x2;
	x3=a+b*c; if(max<x3) max=x3;
	x4=a*b+c; if(max<x4) max=x4;
	x5=(a+b)*c; if(max<x5) max=x5;
	x6=a*(b+c); if(max<x6) max=x6;
	
	cout << max << endl;
	
	return 0;
}
