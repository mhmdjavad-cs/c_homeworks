#include <stdio.h>
#include <math.h>


int main(){
    
    float n;
    scanf("%f", &n);
    float a = n/5;
    int b = floor(a);
    int c = ceil(a-b);
    
    printf("%d\n", b+c);



    return 0;
}


