#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(void) {
	pid_t firstCh, secondCh, returnR;
	int sum;

	firstCh = fork();
	if (firstCh > 0) {
		printf("parent section\n");
		returnR=wait(NULL);
		printf("After the child process termination wait will return value=%ld\n", (long) returnR);
	}

	if (firstCh == 0) {
		printf("The chid process id=%ld\n", (long) getpid());
		sum = 20 + 30;
		printf("sum=%d\n", sum);
		printf("Child Completes\n");
	}
}