#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int h[100],tot=0,i;
	h[0]=0;
	for(i = 1; i <= n; i++){
		h[i]=h[i-1]+i;
		
		tot=tot+h[i];
		
		if(tot==n){
			cout << i << endl;
			break;
		}
		else if(tot>n){
			cout << i-1 << endl;
			break;
		}
	}
	
	return 0;
}
