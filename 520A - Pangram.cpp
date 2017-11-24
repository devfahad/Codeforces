#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,count=1;
	string s;
	cin >> n >> s;
	
	if(n<26) cout << "NO" << endl;
	else{
		for(int i = 0; i < n; i++){
			s[i]=tolower(s[i]);
		}
		sort(s.begin(),s.end());
		for(int i = 0; i < n-1; i++){
			if(s[i+1]-s[i]==1) count++;
		}
		if(count==26) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	
	return 0;
}
