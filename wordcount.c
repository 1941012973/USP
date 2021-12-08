#define LINE_DELIMITERS "&"
#define WORD_DELIMITERS " "

#include <stdio.h>
#include <string.h>

static int wordcount(char *s) {
	char *lastw;
	int count = 1;
	if (strtok_r(s, WORD_DELIMITERS, &lastw) == NULL) return 0;
	while (strtok_r(NULL, WORD_DELIMITERS, &lastw) != NULL) count++;
	return count;
}

double wordaverage(char *s) {
	int linecount = 1;
	char *nextline;
	char *lastl;
	int words;

	nextline = strtok_r(s, LINE_DELIMITERS, &lastl);
	if (nextline == NULL) return 0.0;
	words = wordcount(nextline);
	while ((nextline = strtok_r(NULL, LINE_DELIMITERS, &lastl)) != NULL) {
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
