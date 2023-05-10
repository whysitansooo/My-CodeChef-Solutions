#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int y;
        scanf("%d", &y);

        int count = 0;
        int x = 0;
        
        if (y == 0) {
            count = 1;
        } else {
            int SubArr[1000000];
            int SumArr[1000000];
            int CollabArr[1000000];
            
            for (int i = 0; i < y; i++) {
                SubArr[i] = x - 1;
                if (x < 0) x = SubArr[i];
                count++;
            }
            
            for (int i = 0; i < y; i++) {
                SumArr[i] = x + 2;
                if (x > 0) x = SumArr[i];
                count++;
            }
            
            for (int i = 0; i < y; i++) {
                CollabArr[i] = SumArr[i] - SubArr[i];
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
