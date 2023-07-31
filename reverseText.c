#include <stdio.h>
#include <string.h>

// Fonksiyon prototipi
void ReverseText(char str[], int size);

int main() {
    char str[100];

    printf("Metni girin: ");
    fgets(str, sizeof(str), stdin);

    // fgets, metni okurken sonuna otomatik olarak '\n' karakterini de ekler,
    // bu nedenle '\n' karakterini kaldırıyoruz.
    str[strcspn(str, "\n")] = '\0';

    ReverseText(str, strlen(str));

    printf("Metnin tersi: %s\n", str);

    return 0;
}

// Metni tersine çeviren fonksiyon
void ReverseText(char str[], int size) {
    int start = 0;
    int end = size - 1;
    char temp;

    while (start < end) {
        // Karakterleri yer değiştir
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // İlerle
        start++;
        end--;
    }
}
