#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int RR;
	    int RO;
	    int MR;
	    int oneo;
	    scanf("%d %d",&RR,&RO);
	    oneo = 6*RO;
	    MR = oneo * 6;
	    if(RR<=MR) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}
