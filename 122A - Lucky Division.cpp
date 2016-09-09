#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,a[14]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int count=0, flag = 0;
	cin >> n;
	for(int i = 0 ; i < 14 ; i++){
		if(n == a[i]) count++; // here count 'll be 1 if given value is one of the element in a;
	}
	if(count == 1) cout << "YES" << endl;
	else{
		for(int i = 0; i < 14; i++){
			if(n%a[i] == 0){
				cout << "YES" << endl;
				flag=1;
				break;
			}
		}
		if(flag == 0) cout << "NO" << endl;
	}
	
	return 0;
}
