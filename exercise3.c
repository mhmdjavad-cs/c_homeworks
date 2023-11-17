#include <stdio.h>


int main(){
    
    long int n;
    scanf("%ld", &n);
    
    long int a = ((float)(n-1))/2;
    int n2 = (float)(((float)n)/2 + a + 0.5);

    printf("%ld", a);

    return 0;
}


