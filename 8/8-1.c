#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>


char * bin(int n, char * b){
    if (n < 1){
        return b;
    }
    char * tmp = " ";
    sprintf(tmp, "%d", (n % 2));
    strcat(b, tmp);
    return bin(n-1, b);
}
int main() {
    printf("%c", bin(8, " "));
    return 0;
}
