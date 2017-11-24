#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,c,count=1;
	cin >> n >> c;
	
	int ara[n+10];
	
	for(int i = 0; i < n; i++){
		cin >> ara[i];
		if(i > 0){
			if((ara[i]-ara[i-1]) <= c) count++;
			else count=1;
		}
	}
	cout << count << endl;
	
	return 0;
}
