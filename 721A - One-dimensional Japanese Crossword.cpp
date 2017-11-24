#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int j=0,count[100],k=0,flag=1,noOfb=0;
	
	for(int i = 0; i < n; i++){
		while(s[i]=='B'){
			if(flag==1) noOfb++;
			flag=0;
			i++;
			k++;
		}
		
		flag=1;
		if(k!=0) count[j++]=k;
		k=0;
	}
	
	cout << noOfb << endl; 
	
	for(int i = 0; i < j ; i++){
		cout << count[i];
		if(i<j-1) cout << " ";
	}
	cout << endl;
	
	return 0;
}
