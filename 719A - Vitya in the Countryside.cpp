#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int ara[n+10];
	
	for(int i = 0; i < n; i++) cin >> ara[i];
	
	if(n==1){
		if(ara[0]==0) cout << "UP" << endl;
		else if(ara[0]==15) cout << "DOWN" << endl;
		else cout << "-1" << endl;
	}
	else{
		if((ara[n-1]==0) && (ara[n-2]==1)) cout << "UP" << endl;
		else if(((ara[n-1]-ara[n-2])==1) && (ara[n-1]!=15)) cout << "UP" << endl;
		else cout << "DOWN" << endl;
	}
	
	return 0;
}
