#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long int n,m,a;
	cin >> n >> m >> a;
	
	long long int row,col;
	
	if(n%a == 0){
		row=n/a;
	}
	else{
		row=n/a;
		row++;
	}
	if(m%a == 0){
		col=m/a;
	}
	else{
		col=m/a;
		col++;
	}
	
	long long int tot=row*col;
	
	cout << tot << endl;
	
	return 0;
}
