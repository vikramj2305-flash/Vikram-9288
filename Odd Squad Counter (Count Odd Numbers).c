#include <stdio.h>

int main() {
    int n;
    
   
    scanf("%d", &n);
    
    int arr[1000];   
    int odd_count = 0;
    
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0) {
            odd_count++;
        }
    }
    
    
    printf("%d", odd_count);
    
    return 0;
}
