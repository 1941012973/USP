#include <stdio.h>
#include <unistd.h>

int main() {
        pid_t pid, ppid;
	fork();
        pid = getpid();
        ppid = getppid();
	// sleep(10);

        printf("I am the process %ld, My parent %ld \n", (long) pid, (long) ppid);
}

