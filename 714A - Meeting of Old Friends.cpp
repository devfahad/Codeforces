#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long l1,r1,l2,r2,k,count=0;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	
	if(l2>=l1 && l2<=r1){
		if(r2 < r1){
			if(k>=l2 && k<=r2) count=r2-l2-1+1;
			else count = r2-l2+1;
		}
		else{
			if(k>=l2 && k<=r1) count=r1-l2-1+1;
			else count=r1-l2+1;
		}
		//cout << count << endl;
	}
	else if(l1>=l2 && l1<=r2){
		if(r1 < r2){
			if(k>=l1 && k<=r1) count=r1-l1-1+1;
			else count = r1-l1+1;
		}
		else{
			if(k>=l1 && k<=r2) count=r2-l1-1+1;
			else count=r2-l1+1;
		}
		//cout << count << endl;
	}
	cout << count << endl;
	return 0;
}
