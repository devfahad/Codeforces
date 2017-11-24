#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	char c[1100];	
	getline(cin,s);
	
	int len=s.size(),k=0,count=0;
	
	if(len==2) cout << count << endl;
	else if(len==3) cout << count+1 << endl;
	else{	
		for(int i = 1; i < len; i+=3){
			c[k]=s[i];
			//cout << c[k];
			k++;
		}
		sort(c,c+k);
		//for(int i = 0; i < k ; i++) cout << c[i];
		
		for(int i = 0; i < k-1 ; i++){
			if(c[i]<c[i+1]) count++;
		//	cout << count << " ";
		}
		cout << count+1 << endl;
	}
	return 0;
}
