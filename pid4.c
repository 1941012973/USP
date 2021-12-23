#include <stdio.h>
#include <unistd.h>

int main() {
        pid_t pid, ppid, ret;
	int x = 5;
        ret = fork();
        pid = getpid();
        ppid = getppid();
        // sleep(10);

        fprintf(stderr, "I am the process %ld, My parent %ld, My ret %ld, My x %d \n", (long) pid, (long) ppid, (long) ret, ++x);
}

