#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
   	int i;
        pid_t pid, ppid;

        for(i = 0; i < 3; i++) fork();

        pid = getpid();
        ppid = getppid();

        fprintf(stderr, "I am the process %ld, My parent %ld. i=%d\n", (long) pid, (long) ppid, i);
        wait(NULL);
}

