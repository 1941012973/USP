#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
	int error, i;
	int filedes = 4;
	for (i = 0; i < 134; i++) fprintf(stderr, "errrno %d: %s\n", i, strerror(i));
}
