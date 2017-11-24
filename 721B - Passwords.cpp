#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k,wt,bt;
	cin >> n >> k;
	
	string s[n+10],ans;
	int size[n+10];
	
	for(int i = 0; i< n; i++){
		cin >> s[i];
		size[i]=s[i].length();
	}
	cin >> ans;
	sort(size,size+n);
	
	int len=ans.length(),noOfp=n;
	
	if(n>k){
		if(n%2==1){
			wt=((n/k)*5)+n;
		}
		else{
			noOfp--;
			wt=((noOfp/k)*5)+n;
		}
	}
	else wt=n;
	
	if(size[0]==len && size[n-1]==len) {
		bt=1;
	}
	else{
		for(int i = 0; i < n; i++){
			if(size[i]==len){
				bt=i+1;
				break;
			}
		}
	}
	cout << bt << " " << wt << endl;
	return 0;
}
