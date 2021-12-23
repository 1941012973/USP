#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	int i;
        pid_t pid, ppid;

        for(i = 0; i < 3; i++) if (pid=fork()) break;
        printf("I am the process %ld, My parent %ld,\n", (long) getpid(), (long) getppid());
        wait(NULL);
}

