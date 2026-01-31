#include <stdio.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("encrypted.txt", "w");

    if (in == NULL || out == NULL) {
        printf("File error");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        ch = ch + 3;   // simple encryption
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("File Encrypted Successfully");
    return 0;
}
