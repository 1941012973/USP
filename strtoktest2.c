#include <stdio.h>
#include <string.h>

int main() {
        char s[] = ";ITER:CSE;SOA:EVENTS*PLACED:";
        char *temp;
        temp = strtok(s, ":;*");
        while(temp != NULL) {
                printf("%s\n", temp);
                temp = strtok(NULL, ":;*");
        }
}

