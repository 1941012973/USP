#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() {
	pid_t pid, ppid;
	int i;

	for (i=0; i<3; i++) 
		if (pid=fork()==0)
			break;

	printf("I am process %ld, My parent %ld \n", (long) getpid(), (long) getppid());
	return 0;
}