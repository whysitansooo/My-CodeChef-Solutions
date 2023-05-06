#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--){
	    int NP,TotalMoney;
	    scanf("%d %d",&NP,&TotalMoney);
	    int arr[NP];
	    for(int i=0;i<NP;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<NP;i++){
	        if(arr[i]<=TotalMoney){
	            TotalMoney = TotalMoney - arr[i];
	            printf("1");
	        }
	        else printf("0");
	    }
	    printf("\n");
	    
	}
	return 0;
}

