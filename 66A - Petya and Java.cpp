#include<bits/stdc++.h>
using namespace std;

int main(){

    unsigned long long int n;
    cin >> n;

    if(n <= 127) cout << "byte" << endl;
    else if(n <= 32767 && n >= 128) cout << "short" << endl;
    else if(n <= 2147483647 && n >= 32768) cout << "int" << endl;
    else if(n <= 9223372036854775807 && n >= 2147483648) cout << "long" << endl;
    else cout << "BigInteger" << endl;
    return 0;
}
