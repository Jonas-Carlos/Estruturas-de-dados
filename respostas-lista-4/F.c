#include <stdio.h>
#include <string.h>

void print(int n, char c, int pos) {
    printf("%d %c %d\n", n, c, pos);
}

void analyze(char str[]) {
    int n = strlen(str);

    if (n == 0) {
        return;
    }

    char lastChar = str[0];
    int lastPos = 0;
    int lastCount = 1;

    int tamanho[100001];
    char caractere[100001];
    int posicao[100001];
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (str[i] == lastChar) {
            lastCount++;
        } else {
            tamanho[count] = lastCount;
            caractere[count] = lastChar;
            posicao[count] = lastPos;
            count++;

            lastChar = str[i];
            lastPos = i;
            lastCount = 1;
        }
    }

    tamanho[count] = lastCount;
    caractere[count] = lastChar;
    posicao[count] = lastPos;
    count++;

    for (int i = count - 1; i >= 0; i--) {
        print(tamanho[i], caractere[i], posicao[i]);
    }
}

int main() {
    char str[100001];
    fgets(str, 100001, stdin);
    str[strlen(str) - 1] = '\0';
    analyze(str);
    return 0;
}
