#include<string.h>
#include<stdio.h>

int main() {
	char str[] = "ITER-IBCS-SHM-SUM-IDS";
	char ptr[] = "iter-ibcs-soa-sum-ids-CSE";
	char *token, *ptoken;
	token = strtok(str, "-");
	ptoken = strtok(ptr, "-");
	while (token != NULL) {
		printf("Token=%s\n", token);
		token = strtok(NULL, "-");
	}
	return 0;
}
