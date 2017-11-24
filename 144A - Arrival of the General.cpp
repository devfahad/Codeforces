//not completed

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int h[n+10],min=1111,max=0,c1,c2;
	
	for(int i = 0; i < n; i++){
		cin >> h[i];
		if(min>h[i]) min=h[i];
		if(max<h[i]) max=h[i];
	}
	//cout << min << " " << max << endl;
	for(int i = 0; i < n; i++){
		if(max==h[i]){
			c1=i;
			//cout << c1 << endl;
			break;
		}
	}
	for(int i = n-1; i >= 0; i--){
		if(min==h[i]){
			c2=n-i-1;
			//cout << c2 << endl;
			break;
		}
	}
	if(c1>=(n-c2-1)) cout << c1+c2-1 << endl; // here if max index >= min index,swapping will be 1 less;
	else cout << c1+c2 << endl;
	return 0;
}
