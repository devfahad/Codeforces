#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[3],count=1,max=-1;
	for(int i = 0; i < 4; i++) cin >> a[i];
	
	sort(a,a+4);
	
	for(int i = 0; i < 3; i++){
		if(a[i]==a[i+1]) count++;
		else count=1;
		if(max<count) max=count;
	}
	
	if(max==4) cout << max-1 << endl;
	else if(max==3) cout << max-1 << endl;
	else if(max==2){
		if(a[0]==a[1] && a[2]==a[3]) cout << max << endl;
		else cout << max-1 << endl;
	}
	else cout << max-1 << endl;
	
	return 0;
}
