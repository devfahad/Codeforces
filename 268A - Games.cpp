#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int h[n+10],g[n+10],count=0;
	
	for(int i = 0; i < n; i++) cin >> h[i] >> g[i];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j==i) continue;
			if(g[i]==h[j]) count++;
		}
	}
	cout << count << endl;
	
	return 0;
}
