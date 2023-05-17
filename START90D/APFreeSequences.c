#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int found = 0;
        
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (arr[j] - arr[i] == arr[k] - arr[j]) {
                        printf("NO\n");
                        found = 1;
                        break;
                    }
                }
                
                if (found) {
                    break;
                }
            }
            
            if (found) {
                break;
            }
        }
        
        if (!found) {
            printf("YES\n");
        }
    }
    
    return 0;
}
