#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,count=1;
	cin >> n;
	
	string s[n+10];
	for(int i = 0; i < n; i++){
		cin >> s[i];
		if(i>0){
			if(s[i-1]!=s[i]) count++;
		}
	}
	cout << count << endl;
	return 0;
}
