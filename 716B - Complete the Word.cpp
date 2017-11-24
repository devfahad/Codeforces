#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s,s1;
	cin >> s;
	
	int len=s.length(),count=0,flag=0,a[30],b[30],k=0,dif,x=0,l=0;
	
	s1=s;
	
	sort(s1.begin(),s1.end());
	for(int i = 0; i < len-1; i++){
		if((s1[i]==s1[i+1]) && s1[i]>='A' && s1[i]<='Z' && s1[i+1]>='A' && s1[i+1]<='Z'){
			count++;
		}
		if(s1[i]=='?') flag=1;
	}
	
	if(len!=26) cout << "-1" << endl;
	else if(count!=0) cout << "-1" << endl; // if same letter's repeated..
	else if(flag==0) cout << "-1" << endl; // if no '?' mark..
	else{
		for(int i = 0; i <= len; i++){
			if(s[i]>='A' && s[i]<='Z') a[k++]=s[i-65];
		}
		sort(a,a+k+1);
		for(int i = 1; i < k; i++){
			dif=a[i]-a[i-1];
			if(dif != 1){
				for(int i = a[i-1]; i < a[i]; i++) b[l++]=i+1;
			}
		}
		
		for(int i = 0; i < len; i++){
			if(s[i]!='?') cout << s[i];
			else printf("%c",65+b[x++]);
		}
		cout << endl;
	}
	
	return 0;
}
