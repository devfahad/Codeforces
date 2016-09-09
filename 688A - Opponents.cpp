#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, d, count = 0, max = 0;
	
	cin >> n >> d;
	
	string s;
	
	for(int i = 0; i < d ; i++){
		cin >> s;
		sort(s.begin(), s.end());
		
		if(s[0] == '0'){
			count++;
			if(max < count) max = count;
		}
		else count = 0;
	}
	
	cout << max << endl;
	
	return 0;
}
