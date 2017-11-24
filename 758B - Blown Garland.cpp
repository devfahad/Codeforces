#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	map<char,int> mp;
	
	while(1){
		bool flag=false;
		for(int i = 0; i < s.size()-4; i++){
			if(s[i]=='!'){
				s[i]=s[i+4];
				mp[s[i+4]]++;
				flag=true;
			}
			else if(isalpha(s[i]) && !isalpha(s[i+4])){
				s[i+4]=s[i];
				mp[s[i+4]]++;
				flag=true;
			}
		}
		if(flag==false) break;
	}
	cout << mp['R'] << " " << mp['B'] << " " << mp['Y'] << " " << mp['G'] << endl;
	
	return 0;
}
