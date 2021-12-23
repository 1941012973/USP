#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
	int error;
	int fildes = 4;
	if (close(fildes) == -1) fprintf(stderr, "My error is: %s\n", strerror(errno));
	fprintf(stderr, "Surprise error: %s\n", strerror(130));
}
