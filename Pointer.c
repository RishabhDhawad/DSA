
#include <stdio.h>

void main () {
    int n = 5 ;
    int f = 1 ;
    
    while (n != 0 ) {
        f = f * n ;
        n--;
    }
    
    printf("%d",f);
}