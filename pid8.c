#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
        pid_t ret;
        ret = fork();

	// fork returns 0 to the child process
	if (ret == 0) {
		printf("I am the CHILD process %ld, My parent %ld.\n", (long) getpid(), (long) getppid());
		sleep(10);
		printf("I am the CHILD process %ld, My parent %ld\n", (long) getpid(), (long) getppid());
	} else printf("I am the PARENT process %ld, My parent %ld.\n", (long) getpid(), (long) getppid());
}

