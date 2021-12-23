#include <stdio.h>
#include <string.h>

int main() {
        char s[] = ";ITER:CSE;SOA:EVENTS*PLACED:";
        char *temp;
        char *last;
        temp = strtok_r(s, ":;*", &last);
        while(temp != NULL) {
                printf("%s\n", temp);
                temp = strtok_r(NULL, ":;*", &last);
        }
}
