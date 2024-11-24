#include <stdio.h>

int main() {
    // Write C code here
    int n,i,sum,b;
    sum = 0;
    printf("Enter length ");
    scanf("%d",&n);
    
    int a[n];
    i=1;
    while(i<=n)
    {
        printf("Enter Temperature ");
        scanf("%d",&a[i]);
        
        if(a[i] > 40 || a[i] < 0)
        {
            printf("Extreme temperate on day %d\n", i);
        }
        sum = sum + a[i];
        i = i + 1;
    }
    
    printf("Average temperature is %d", sum/n);
    
    return 0;
}