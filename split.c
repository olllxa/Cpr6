#include <stdio.h>

int main() {
    char text[] = "the cat sat on the mat";
    int textLength = 0;

    while (text[textLength] != '\0') {
        textLength++;
    }

    char words[10][20];
    int wordIndex = 0;  
    int letterIndex = 0; 

    for (int i = 0; i <= textLength; i++) {
        if (text[i] == ' ' || text[i] == '\0') {
            words[wordIndex][letterIndex] = '\0'; 
            wordIndex++;
            letterIndex = 0; 
        } else {
            words[wordIndex][letterIndex] = text[i];
            letterIndex++;
        }
    }

    printf("Разделённые слова:\n");
    for (int i = 0; i < wordIndex; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
