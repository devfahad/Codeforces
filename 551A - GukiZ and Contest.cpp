#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int ara[n+10],count=0;
	for(int i = 0; i < n; i++) cin >> ara[i];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(ara[i]<ara[j]) count++;
		}
		cout << 1+count;
		if(i < n-1) cout << " ";
		count=0;
	}
	cout << endl;
	return 0;
}
