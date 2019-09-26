#include <stdio.h> 
int main() { 
    // Click HELP above to see examples of handling input/debug/output 
    // INPUT: scanf("%i", &n); 
    // DEBUG: printf("%d\n", n); 
    // OUTPUT: printf("%d\n", result); 

    // Write the code to solve the problem below, 
    // format the "result" as specified in the problem statement 
    // and finally, write the result to stdout 
    // IMPORTANT: Remove all debug statements for final submission 
    // Do not edit below this 
    int k, n, a[30], i, max = 0, min = 500;
    scanf ("%d", &k);
    scanf ("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if (a[i] <= k) {
            a[i] += k;
        }else {
            a[i] -= k;
        }
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    
    printf ("%d", max-min);
    return 0; 
} 

