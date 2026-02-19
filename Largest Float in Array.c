#include <stdio.h>

int main() {
    int n;
    
    
    scanf("%d", &n);
    
    float arr[1000];   
    
    
    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    
   
    float max = arr[0];
    
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
   
    printf("%.2f", max);
    
    return 0;
}
