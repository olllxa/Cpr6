#include <stdio.h>

int main() {
    char text[] = "the cat sat on the mat";
    char target[] = "cat";
    int textLength = 0;
    int targetLength = 0;

    while (text[textLength] != '\0') {
        textLength++;
    }

    while (target[targetLength] != '\0') {
        targetLength++;
    }

    int foundIndex = -1;
    for (int i = 0; i <= textLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Слово \"%s\" найдено на позиции %d\n", target, foundIndex);
    } else {
        printf("Слово \"%s\" не найдено\n", target);
    }

    return 0;
}
