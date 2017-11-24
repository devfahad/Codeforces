#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,count=0,mid;
	cin >> n;
	
	int ara[n+10];
	
	for(int i = 0; i < n; i++) cin >> ara[i];
	
	sort(ara,ara+n);
	
	if(ara[0]==ara[n-1]) cout << "YES" << endl; // if same
	else{
		for(int i = 0; i < n-1; i++){ // if different
			if(ara[i]<ara[i+1]){
				count++;
				if(count==1) mid=ara[i+1];
			}
		}
		//cout << count << endl;
		if(count==1) cout << "YES" << endl;
		else if(count>2) cout << "NO" << endl;
		else{
			int dif=ara[n-1]-mid;
			if(ara[0]+dif == mid) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	
	return 0;
}
