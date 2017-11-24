#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,m;
	cin >> n >> m;
	
	char matrix[n][m],r,c;
	
	for(r = 0; r < n; r++){ // setting all row*column spaces as '.';
		for(c = 0 ; c < m ; c++){
			matrix[r][c]='.';
		}
	}
	
	int flag=1;
	
	for(r = 0; r < n; r++){
		
		if(r%2==1 && flag==1){
			matrix[r][m-1]='#';
			flag=0;
		}
		else if(r%2==1 && flag==0){
			matrix[r][0]='#';
			flag=1;
		}
		else{
			for(c = 0; c < m; c++){
			matrix[r][c]='#';
			}
		}
	}
	for(r = 0; r < n; r++){
		for(int c = 0 ; c < m ; c++){
			cout << matrix[r][c];
		}
		cout << endl;
	}
	
	return 0;
}
