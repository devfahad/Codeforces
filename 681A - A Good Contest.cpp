#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,flag=0;
	cin >> n;
	while(n--){
		string s;
		int bc,ac;
		cin >> s >> bc >> ac;
		
		if((ac-bc) > 0 && bc >= 2400){
			flag = 1;
		}
		
	}
	if(flag==1) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
