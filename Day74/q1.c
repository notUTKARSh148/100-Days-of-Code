/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main(void) {
    char src[100], dest[100];
    printf("Enter source filename: ");
    if (scanf("%99s", src) != 1) return 1;
    printf("Enter destination filename: ");
    if (scanf("%99s", dest) != 1) return 1;

    FILE *fsrc = fopen(src, "r");
    if (fsrc == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    FILE *fdest = fopen(dest, "w");
    if (fdest == NULL) {
        printf("Error: Could not open destination file!\n");
        fclose(fsrc);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }

    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully to %s\n", dest);
    return 0;
}
