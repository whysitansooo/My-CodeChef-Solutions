#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--){
	    int size,m;
	    scanf("%d",&size);
	    int arr[size];
	    for(int i=0;i<size;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<size;i++)
	    {
	        int c=0;
	        for(int j=0;j<size;j++)
	        {
	            if(arr[i]==arr[j])
	            c++;
	        }
	        if(c%2!=0)
	        m=arr[i];
	        
	    }
	    printf("%d\n",m);
	}
	return 0;
}
