#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int NumberOfCities;
	    scanf("%d",&NumberOfCities);
	    int arr[2*NumberOfCities];
	    for(int i=0;i<2*NumberOfCities;i++){
	        scanf("%d",&arr[i]);
	    }
	    
	    int flag = 0;
	    for(int i=0;i<2*NumberOfCities;i++){
	        int count = 0;
	        for(int j = i+1;j<2*NumberOfCities;j++){
	            if(arr[i] == arr[j])
	            count++;
	            flag = 1;
	        }
	        if(count==2){
	        printf("NO\n");
	        flag=0;
	        break;
	        }
	    }
	    if(flag == 1) printf("YES\n");
	    
	}
	return 0;
}
