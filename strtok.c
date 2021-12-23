 #include<string.h>
#include<stdio.h>

int main() {
	char str[] = "ITER-IBCS-SHM--SUM-IDS";
	char *token;
	token = strtok(str, "-");

	while (token != NULL) {
		printf("Token=%s\n", token);
		token = strtok(NULL, "-");
	}

	printf("%s %s\n", str,token);
	return 0;
}
