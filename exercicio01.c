#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portugues");

    int a = 2, b = 1;
    if((a + b ) == 3) {
        printf("O resultado é 3.\n");   
    } else {
        printf("O resultado não é 3.\n");
    }
    return 0;
}
