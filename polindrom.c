#include <stdio.h>
#include <string.h>

// Fonksiyon prototipi
int IsPolindrom(const char *str);

int main() {
    char word[100];

    printf("Bir kelime girin: ");
    scanf("%s", word);

    if (IsPolindrom(word))
        printf("Girdiğiniz kelime bir polindromdur.\n");
    else
        printf("Girdiğiniz kelime bir polindrom değildir.\n");

    return 0;
}

// Fonksiyon tanımı
int IsPolindrom(const char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < length / 2; i++, j--) {
        if (str[i] != str[j])
            return 0; // Kelime polindrom değilse 0 döndürüyoruz.
    }

    return 1; // Kelime polindrom ise 1 döndürüyoruz.
}
