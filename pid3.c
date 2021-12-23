#include <stdio.h>
#include <unistd.h>

int main() {
        pid_t pid, ppid, ret;
        ret = fork();
        pid = getpid();
        ppid = getppid();
        // sleep(10);

        fprintf(stderr, "I am the process %ld, My parent %ld, My ret %ld \n", (long) pid, (long) ppid, (long) ret);
}



