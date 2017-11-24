#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int end, dif, start = 1;
	long long ans=0;
	
	for(int i = 1; i <= m; i++){
		
		cin >> end;
		
		dif = end - start;
		
		if(dif < 0) dif=dif+n;
		
		ans=ans+dif;
		
		start = end;
		
	}
	
	cout << ans << endl;
	
	return 0;
}
