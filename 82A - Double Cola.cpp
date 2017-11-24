#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string queue[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"}; // queue is the array of string;
	
	while(n>5){
		n=(n/2)-2;
	}
	
	cout << queue[n-1] << endl;
	
	return 0;
}
