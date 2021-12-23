/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
	int error;
	int fildes = 4;
	if (close(fildes) == -1) perror("My error is ");
} */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <string.h>

char **makeargv(char *);

int main() {
	char s[] = "This is a string for testing";
	char **myargv;
	myargv = makeargv(s);

	if (myargv == NULL) fprintf(stderr, "Failed to construct an argument array\n");
	else for (int i = 0; myargv[i] != NULL; i++) printf("Myargv[%d]: %s\n", i, myargv[i]);

	return 0;
}

char **makeargv(char *s) {
	int ntokens, i; //counter for tokens
	char *t, *argvp; // array to point token
	argvp = NULL;

	t = (char *) malloc(sizeof(char) * (strlen(s) + 1)); // mark a copy of s, because s will be lost in call to strtok
	strcpy(t, s);
	if (strtok(s, " ") != NULL) for(ntokens = 1; strtok(NULL, " ") != NULL; ntokens++); // count umber of tokens in s
	printf("number of tokens=%d\n", ntokens);
	argvp = (char **)malloc((ntokens+1)*sizeof(char *)); // assign memory to point to ntokens, -1 to point NULL

	/* insert pointers to tokens into the argument array */
	*(argvp + 0) = strtok(t, " ");
	for (i = 1; i < ntokens; i++) *(argvp + ntokens) = NULL;
	*(argvp + ntokens) = NULL; // put in final NULL pointer
	return argvp;
}


