#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n,evensum,oddsum,n1,n2,tot;
	scanf("%I64d",&n);
	if(n%2==0){
		n/=2;
		printf("%I64d\n",n);
	}
	else{
		n=(n+1)/(-2);
		printf("%I64d\n",n);
	}
	
	return 0;
}
