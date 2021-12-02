#include<string.h>
#include<stdio.h>

int main() {
	char str[] = "ITER-IBCS-SHM-SUM-IDS";
	char *token;
	token = strtok(str, "-");

	while (token != NULL) {
		printf("Token=%s\n", token);
		token = strtok(NULL, "-");
	}
	return 0;
}
