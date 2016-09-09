#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int year;
	while(cin >> year){
		
		int a,b,c,d;
		
		year=year+1;
		
		for(int i = year; i <= 9050; i++){
			
			
			a = i/1000; //cout << a << " ";
			b = (i%1000) / 100; //cout << b << " ";
			c = (i%100) / 10; //cout << c << " ";
			d = (i%10); //cout << d << " ";
			
			if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
				cout << i << endl;
				break;
			}
		}
	}
	
	
	
	return 0;
}
