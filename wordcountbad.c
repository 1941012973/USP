#define LINE_DELIMITERS "$"
#define WORD_DELIMITERS " "

#include <stdio.h>
#include <string.h>

static int wordcount(char *s) {
	int count = 1;
	if (strtok(s, WORD_DELIMITERS) == NULL) return 0;
	while (strtok(NULL, WORD_DELIMITERS) != NULL) count++;
	return count;
}

double wordaverage(char *s) {
	int linecount = 1;
	char *nextline;
	int words;

	nextline = strtok(s, LINE_DELIMITERS);
	if (nextline == NULL) return 0.0;
	words = wordcount(nextline);
	while ((nextline = strtok(NULL, LINE_DELIMITERS)) != NULL) {
		words += wordcount(nextline);
		linecount++;
	}

	printf("w - %d, l - %d \n", words, linecount);

	return (double) words/linecount;
}

int main(int argc, char *argv[]) {
	double avg = wordaverage(argv[1]);
	printf("\n %f \n", avg);
}

