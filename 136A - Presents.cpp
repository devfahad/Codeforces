#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int ara[n+10];
	
	for(int i = 1; i <= n; i++){
		cin >> ara[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(ara[j]==i){
				cout << j;
				if(i < n) cout << " ";
			}
		}
	}
	cout << endl;
	
	return 0;
}
