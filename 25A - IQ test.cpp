#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int ara[n+10],odd=0,even=0;
	for(int i = 0; i < n; i++) cin >> ara[i];
	
	if(ara[0]%2==1) odd++;
	else even++;
	if(ara[1]%2==1) odd++;
	else even++;
	if(ara[2]%2==1) odd++;
	else even++;
	
	if(odd>even){
		for(int i = 0; i < n; i++){
			if(ara[i]%2==0){
				cout << i+1 << endl;
				break;
			}
		}
	}
	else{
		for(int i = 0; i < n; i++){
			if(ara[i]%2==1){
				cout << i+1 << endl;
				break;
			}
		}
	}
	
	return 0;
}
