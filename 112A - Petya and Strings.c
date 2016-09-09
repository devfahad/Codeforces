#include <stdio.h>
#include <string.h>

int main(){
	
	char a[120] , b[120];
	
	gets(a);
	gets(b);
	
	int i;
	
	for(i = 0; i < strlen(a) ; i++){
		if(a[i]>96) a[i]=a[i]-32; // converting all to capital letters.[ascii value of A=65,a=97]
		if(b[i]>96) b[i]=b[i]-32;
	}
	printf("%d\n",strcmp(a,b)); // it gives 3 values: '0'->if equal... '1'-> if a > b......'-1's-> if a < b...
	
	return 0;
}
