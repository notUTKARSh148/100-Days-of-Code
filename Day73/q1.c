/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%99s", filename) != 1) return 1;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File could not be opened!\n");
        return 1;
    }

    int ch;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
