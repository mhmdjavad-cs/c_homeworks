#include <stdio.h>


int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    int a = n + (~m) + 1;
    printf("%d", a);

    return 0;
}

