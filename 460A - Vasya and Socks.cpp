#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,m;
	cin >> n >> m;
	
	int x=n;
	
	for(int i = 1; i <= x; i++){
		if(i%m==0){
			x++;
			//cout << x << endl;
		}
	}
	cout << x << endl;
	return 0;
}
