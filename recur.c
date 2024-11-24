#include <stdio.h>

void Arr(int a[],int n,int m){
    
    if(m == n)
    {
        return;
    }
    else
    {
        scanf("%d",&a[m]);
    }
    Arr(a,n,m+1);
}

void print(int a[],int n,int m){
    
    if(m == n)
    {
        return;
    }
    else
    {
        printf("%d", a[m]);
    }
    print(a,n,m+1);
}

int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    
    int a[n];
    
    Arr(a,n,0);
    print(a,n,0);

    return 0;
}