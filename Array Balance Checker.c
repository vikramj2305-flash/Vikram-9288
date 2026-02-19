#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    
   
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int mid = N / 2;
    int sum1 = 0, sum2 = 0;

   
    for(int i = 0; i < mid; i++) {
        sum1 += arr[i];
    }

    
    for(int i = mid; i < N; i++) {
        sum2 += arr[i];
    }

    
    if(sum1 == sum2) {
        printf("BALANCED");
    } else {
        printf("NOT BALANCED");
    }

    return 0;
}
