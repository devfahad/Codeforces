#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int ara[n+10];
	
	for(int i = 0; i < n; i++) cin >> ara[i];
	
	for(int i = 0; i < n-1; i++){
		cout << ara[i]+ara[i+1];
		if(i < n-1) cout << " ";
	}
	cout << ara[n-1];
	
	return 0;
}
