#include <unistd.h>
#include <stdio.h>

main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    int sc = 0;

    fp = fopen(argv[0], "r");
    if (fp == NULL) {
        printf("Unable to open the file %s", argv[1]);
    } else {
        while (!feof(fp)) {
            ch = fgetc(fp);
            if (ch == ' ') sc++;
        }
        printf("Number of spaces: %d", sc);
        printf("\n");
        fclose(fp);
    }
}
