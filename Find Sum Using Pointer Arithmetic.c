#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n]; 
    long long sum = 0;

    int* ptr = arr;
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr);
        ptr++;  
    }
   
    ptr = arr;
    for(int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    
    printf("%lld\n", sum);
    return 0;
}
