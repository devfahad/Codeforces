#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string p;
	cin >> p;
	int flag = 0;
	
	for(int i = 0; i < p.length() ; i++){
		if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') flag = 1;  // p[i]=='+' is ignored as it doesn't produce any output(here increments but doesn't print like others) ...
	}
	if(flag == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	
	return 0;
}
