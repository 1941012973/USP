#include<stdio.h>
#include<string.h>
int main() {
	char str[] = "Lesson-Plan-USP-DOS-FML-PLC";
	printf("Enter String:::");
	puts(str);
	char *token;
	char *last;
	token = strtok_r(str, "-", &last);
	while(token != NULL) {
		printf("Token:%s\n", token);
		printf("\t\tRemaining part of the string : %s\n", last);
		token=strtok_r(NULL, "-", &last);
	}
	return 0;
}
