#include<bits/stdc++.h>
using namespace std;

#define sc scanf
int main(){
	
	int n,p;
	sc("%d %d",&n,&p);
	int ara[p+10];
	
	for(int i = 0; i < p; i++) cin >> ara[i];
	
	sort(ara,ara+p);
	
	int k = n-1,min=1111,mind;
	
	if(n==p) cout << ara[n-1]-ara[0] << endl;
	else{
		for(int i = 0; i <= p-n; i++){
			mind=ara[k++]-ara[i];
			if(min>mind) min=mind;
		}
		cout << min << endl;
	}
	
	return 0;
}
