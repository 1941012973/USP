#include<errno.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(void) {
	pid_t childpid, pid;
	int status;
	pid = fork();

	if (pid == 0) {
		printf("Child Part Excecuted!!!\n");
		exit(0);
	} else {
		childpid = wait(&status);
		if (childpid == -1) {
			perror("Failed to wait for child\n");
		} else if (WIFEXITED(status) && !WEXITSTATUS(status)) {
			printf("Child %ld terminated normally\n", (long) childpid);
		} else if (WIFSIGNALED(status)) {
			printf("Child %ld terminated with return status%d\n", (long) childpid, WEXITSTATUS(status));
		} else if (WIFEXITED(status)) {
			printf("Child %ld stopped due to signal %d\n", (long) childpid, WSTOPSIG(status));
		}
	}
}