#include<string.h>
#include<stdio.h>

int main() {
	char str[] = "ITER-IBCS-SHM-SUM-IDS";
	char *delimiters = "-";
	int numtokens;
	// COUNT
	if (strtok(str, delimiters) != NULL) {
		for (numtokens = 1; strtok(NULL, delimiters) != NULL; numtokens++);
	}
	printf("Number of tokens: %d\n", numtokens);
	return 0;
}
