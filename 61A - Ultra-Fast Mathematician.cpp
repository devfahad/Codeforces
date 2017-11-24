#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string a,b;
	cin >> a >> b;
	int len=a.length(),j=0;
	
	for(int i = 0; i < len; i++){
		if(a[i]==b[j]){
			cout << "0";
			j++;
		}
		else{
			cout << "1";
			j++;
		}
	}
	cout << endl;
	
	return 0;
}
