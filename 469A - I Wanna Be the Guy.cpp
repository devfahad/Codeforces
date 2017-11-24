#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,a,b,ara[210],i,j;
	
	cin >> n >> a;
	
	for(i = 0; i < a; i++) cin >> ara[i];
	//cout << i << endl;
	cin >> b;
	
	for(j = i; j < (i+b); j++) cin >> ara[j];
	//cout << j << endl;
	
	int tot=i+b;
	//cout << tot << endl;
	
	sort(ara,ara+tot);
	
	int count=1;
	
	for(int k = 0; k < tot-1; k++){
		if(ara[k]<ara[k+1]) count++;
	}
	
	if(n==1 && a==0 && b==0) cout << "Oh, my keyboard!" << endl;
	else if(count==n) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;
	
	return 0;
}
