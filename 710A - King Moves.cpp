#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string c;
	cin >> c;
	
	if((c[0] =='a' && c[1] == '8') || (c[0]=='a' && c[1] == '1') || (c[0]=='h' && c[1] == '1') || (c[0]=='h' && c[1] == '8')){
		cout << 3 << endl;
	}
	
	else if((c[0] >= 'b' && c[0] <= 'g' && c[1] == '1') || (c[0] >= 'b' && c[0] <= 'g' && c[1] == '8')){
		cout << 5 << endl;
	}
	
	else if((c[1] >= '2' && c[1] <= '7' && c[0] == 'a') || (c[1] >= '2' && c[1] <= '7' && c[0] == 'h')){
		cout << 5 << endl;
	}
	
	else{
		cout << 8 << endl;
	}
	
	return 0;
}
