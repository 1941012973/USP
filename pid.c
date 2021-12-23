#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	pid_t pid, ppid;
	pid = getpid();
	ppid = getppid();
	// sleep(10);

	printf("I am the process %ld, My parent %ld \n", (long) pid, (long) ppid);
}
