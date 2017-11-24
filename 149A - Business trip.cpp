#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int k;
	cin >> k;
	
	int ara[12],count=0,tot=0;
	
	for(int i = 0; i < 12; i++) cin >> ara[i];
	sort(ara,ara+12);
		
	if(k==0) cout << "0" << endl;
	else{
		for(int i = 11; i >= 0; i--){
			tot+=ara[i];
			if(tot<k) count++;
			else if(tot>=k){
				count++;
				break;
			}
		
		}
		if(tot<k) cout << "-1" << endl;
		else cout << count << endl;
	}
	
	
	return 0;
}
