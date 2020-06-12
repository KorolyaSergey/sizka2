#include <stdio.h>
#include <string.h>

int main() {
    char * s1 = "Harry";
    char * s2 = "Harry";
    char * s3 = "Brawhalla";
    if (strcmp(s1, s2) <= 0){
        s1 = s3;
        printf("Changed");
        return 0;
    }
    printf("Not changed");
    return 0;
}