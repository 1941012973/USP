#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
        pid_t pid, ppid, ret;

        fork();
        fork();
	fork();

	pid = getpid();
        ppid = getppid();

        fprintf(stderr, "I am the process %ld, My parent %ld.\n", (long) pid, (long) ppid);
	wait(NULL);
}

