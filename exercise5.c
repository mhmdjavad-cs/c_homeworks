#include <stdio.h>


int main(){
    
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    int n;
    scanf("%d", &n);

    int new_s = (n + s)%60;
    printf("%d\n", n/60);
    int new_m = (   ((n+s)/60)+m   )%60;
    int new_h = (((n+s+60*m)/3600)+h)%24;

    printf("%d %d %d\n", new_h, new_m, new_s);

    return 0;
}

