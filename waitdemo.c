#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main() {
	pid_t childpid;
	childpid = fork();

	if (childpid == 0) {
		printf("inside child\n");
	} else {
		// wait(NULL);
		printf("inside parent\n");
	}
}