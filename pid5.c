
#include <stdio.h>
#include <unistd.h>

int main() {
        pid_t pid, ppid, ret;
        int x = 5;
        ret = fork();
        pid = getpid();
        ppid = getppid();

	// fork returns 0 to the child process
	if (ret == 0) fprintf(stderr, "I am the CHILD process %ld, My parent %ld, My ret %ld, My x %d \n", (long) pid, (long) ppid, (long) ret, ++x);
        else fprintf(stderr, "I am the PARENT process %ld, My parent %ld, My ret %ld, My x %d \n", (long) pid, (long) ppid, (long) ret, ++x);
}
