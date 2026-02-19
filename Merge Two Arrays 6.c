#include <stdio.h>

int main() {
    int n1, n2;
    
  
    scanf("%d", &n1);
    int arr1[20];
    
    
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
   
    scanf("%d", &n2);
    int arr2[20];
    
    
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int i = 0, j = 0;
    int last = -1000000000;  
    
   
    while(i < n1 && j < n2) {
        int val;
        
        if(arr1[i] < arr2[j]) {
            val = arr1[i++];
        } 
        else if(arr1[i] > arr2[j]) {
            val = arr2[j++];
        } 
        else {
            val = arr1[i];
            i++;
            j++;
        }
        
        if(val != last) {
            printf("%d ", val);
            last = val;
        }
    }
    
   
    while(i < n1) {
        if(arr1[i] != last) {
            printf("%d ", arr1[i]);
            last = arr1[i];
        }
        i++;
    }
    

    while(j < n2) {
        if(arr2[j] != last) {
            printf("%d ", arr2[j]);
            last = arr2[j];
        }
        j++;
    }
    
    return 0;
}
