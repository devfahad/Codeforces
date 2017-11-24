#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	int count=0,len;
	len = s.size();
	
	for(int i = 0; i < len ; i++){
		if(s[i] >='A' && s[i] <= 'Z' ) count++; // s[i] is equal to upper case then count++; 
	}
	//cout << count;
	if(count == len){
		for(int i = 0; i < len; i++){
			s[i]=tolower(s[i]);
			cout << s[i];
		}
		cout << endl;
	}
	else if(count == len-1 && (s[0] >= 'a' && s[0] <= 'z')){\
		s[0]=toupper(s[0]);
		cout << s[0];
		for(int i = 1; i < len; i++){
			s[i]=tolower(s[i]);
			cout << s[i];
		}
		cout << endl;
	}
	else{
		for(int i = 0; i < len ; i++) cout << s[i];
		cout << endl;
	}
	return 0;
}
