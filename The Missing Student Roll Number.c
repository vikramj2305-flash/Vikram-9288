#include <stdio.h>

int main() {
    int n;
    
    
    scanf("%d", &n);
    
    int sum_total = n * (n + 1) / 2; 
    int sum_given = 0;
    int num;
    
    
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        sum_given += num;
    }
    
    
    int missing = sum_total - sum_given;
    printf("%d", missing);
    
    return 0;
}
