#include<bits/stdc++.h>
using namespace std;

int main(){
	
	double d,l,v1,v2; // d is the width..
	scanf("%lf %lf %lf %lf",&d,&l,&v1,&v2);
	
	double x,time;
	x=l-d; // x is the combined distance which will be travelled by the presses...
	time=(x)/(v1+v2);
	
	printf("%.20lf\n",time);
	
	return 0;
}
