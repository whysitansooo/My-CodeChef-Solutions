#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int size,Bob,Alice;
	    scanf("%d %d %d",&size,&Bob,&Alice);
	    int arr[size];
	    for(int i=0;i<size;i++){
	        scanf("%d",&arr[i]);
	    }
	    int AC = 0;
	    int BC = 0;
	    for(int i=0;i<size;i++){
	        if(arr[i]%Bob==0) BC++;
	        else if(arr[i]%Alice==0) AC++;
	        else if(arr[i]%Bob==0 && arr[i]%Alice==0) BC++;
	    }
	    if(BC>AC) printf("BOB\n");
	    else printf("ALICE\n");
	}
	return 0;
}
