#include<bits/stdc++.h>
using namespace std;

int flag=0;

isprime(int n){
	
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			flag=1;
			break;
		}	
	}
}

int main(){
	
	int n,a,b;
	cin >> n;
	
	if(n%2==0){
		a=n/2,b=a;
		isprime(a);
		if(flag==1) cout << a << " " << b << endl;
		else{
			a--,b++;
			cout << a << " " << b << endl;
		}
		
	}
	else{
		a=n/2,b=a+1;
		isprime(a);
		if(flag==1){
			isprime(b);
			if(flag==1) cout << a << " " << b << endl; //anp,bnp
			else{ //anp,bp
				a--,b++;
				cout << a << " " << b << endl;
			}
		}
		else{
			isprime(b);
			if(flag==0){
				a--,b++;
				cout << a << " " << b << endl;
			}
			else{
				a--,b++;
				cout << a << " " << b << endl;
			}
		}
	}
	
	return 0;
}
