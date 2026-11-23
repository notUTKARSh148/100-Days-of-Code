/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%99s", filename) != 1) return 1;

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    char text[256];
    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        size_t len = strlen(text);
        if (len > 0 && text[len - 1] != '\n') {
            fprintf(fp, "\n%s\n", text);
        } else {
            fprintf(fp, "%s", text);
        }
        printf("File updated successfully with appended text.\n");
    }

    fclose(fp);
    return 0;
}
