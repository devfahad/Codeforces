#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,t,flag=0;
	
	cin >> n >> t;
	
	int a[n+10];
	
	for(int i = 1; i < n; i++){
		cin >> a[i];
	}
	for(int i = 1; i < n; i=(i+a[i])){
		if(i+a[i]==t){
			flag=1;
			break;
		}
		else if((i+a[i])>t) break;
	}
	
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
