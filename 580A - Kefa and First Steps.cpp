#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int ara[n+10], count=1,max=1;
	
	for(int i = 0; i < n; i++){
		cin >> ara[i];
	}
	for(int j = 0; j < n-1; j++){
		if(ara[j] <= ara[j+1]){
			count++;
			if(max < count) max=count;
		}
		else count=1;
	//	cout << max << " ";
	}

	cout << max << endl;
	return 0;
}
