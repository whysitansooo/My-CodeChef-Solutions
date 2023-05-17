#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int A;
	    scanf("%d",&A);
	    if(A%2==0 && A%7==0) printf("Alice\n");
	    else if(A%2!=0 && A%9==0) printf("Bob\n");
	    else printf("Charlie\n");
	}
	return 0;
}
