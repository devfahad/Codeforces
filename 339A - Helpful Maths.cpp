#include<bits/stdc++.h>
using namespace std;

int main(){
	
	char s[110],s1[110];
	int ara[110],x=0;
	
	gets(s);
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '1' || s[i] == '2' || s[i] == '3'){
			ara[x++]=s[i]-'0';
		}
	}
	sort(ara,ara+x);
	//for(int i = 0; i < x ; i++) cout << ara[i];
	
	for(int i = 0; i < x; i++){
		cout << ara[i];
		if(i < x-1) cout << "+";
	}
	cout << endl;
	
	return 0;
}
