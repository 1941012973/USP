#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	pid_t childpid;
	childpid=fork();

	if (childpid == -1) {
		printf("fork erro\n");
		return 1;
	} else if(childpid == 0) {
		printf("I am child my process ID=%ld\n", (long) getpid());
		exit(0);
	} else {
		printf("I am parent my PID=%ld\n", (long) getppid());
		sleep(100);
		wait(NULL);
		exit(0);
	}
}