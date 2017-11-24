#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k,a,count=0;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a+k<=5) count++;
	}
	
	cout << count/3 << endl;
	
	return 0;
}
