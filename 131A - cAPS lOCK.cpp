#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	int len=s.size(),count=0;
	if(len==1){
		s[0]=toupper(s[0]);
		cout << s[0] << endl;
	}
	
	for(int i = 0; i < len; i++){
		if(toupper(s[i])) count++;
	}
	if(count == len){
		for(int i = 0; i < len ; i++) s[i]=tolower(s[i]);
	}
	//cout << s;
	if(s[0] >= 97){
		for(int i = 1; i < len ; i++){
			if(toupper(s[i])) count++;
		}
		
	}
	if(count = len - 1){
		cout << tolower(s[0]);
		for(int i = 1; i < len ; i++) cout << tolower(s[i]);
	}
	
	cout << endl;
	return 0;
}
