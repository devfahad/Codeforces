#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	int len=s.size(),j=0;
	
	for(int i = 0; i < len ; i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			i=i+2;
			j++;
			if(i>=3 && j==1) cout << " ";
		}
		else{
			cout << s[i];
			j=0;
		}
	}
	cout << endl;
	return 0;
}
