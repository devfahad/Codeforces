#include<bits/stdc++.h>
using namespace std;

struct dragon{
	int x,y;
	bool operator<(const dragon &d) const {
    	if(x != d.x) return x < d.x;  /* or write this line only in the third bracket---return x < d.x; */
        else return y < d.y;
    }
};

int main(){
	dragon d[1005];
	
	int s,n,flag=1;
	
	cin >> s >> n;
	
	for(int i = 0; i < n; i++) cin >> d[i].x >> d[i].y;
	
	sort(d,d+n);
	
	for(int i = 0; i < n; i++){
		if(s > d[i].x) s+=d[i].y;
		else{
			flag=0;
			break;
		}
	}
	
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
