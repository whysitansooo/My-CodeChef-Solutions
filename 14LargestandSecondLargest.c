#include <stdio.h>
#include <limits.h>

int main(void) {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    int arr[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&arr[i]);
	    }
	    int max = INT_MIN;
	    int smax = INT_MIN;
	    for(int i=0;i<N;i++){
	        if(max<arr[i]){
	            max = arr[i];
	        }
	    }
	    for(int i=0;i<N;i++){
	        if(smax<arr[i]&&arr[i]<max){
	            smax = arr[i];
	        }
	    }
	    
	    printf("%d\n",max+smax);
	    
	}
	return 0;
}

