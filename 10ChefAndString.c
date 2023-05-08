#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    char str[1000000];
        scanf("%s",str);
	    int size=0;
	    int i=0;
	    while(str[i]!='\0'){
	        size++;
	        i++;
	    }
        
        for(int i=0,j=size-1;i<j;i++,j--){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        char rstr[1000000];
        strcpy(rstr,str);
        for(int i=0,j=size-2;i<j;i++,j--){
            char temp = rstr[i];
            rstr[i] = rstr[j];
            rstr[j] = temp;
        }
        
        char rrstr[1000000];
        strcpy(rrstr,str);
        for(int i=1,j=size-1;i<j;i++,j--){
            char temp = rrstr[i];
            rrstr[i] = rrstr[j];
            rrstr[j] = temp;
        }
        int comp=strcmp(rstr,rrstr);
        if(comp==0) printf("YES\n");
        else printf("NO\n");
        
        
        
	}
	return 0;
}
