#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_string(char phrase[], char word[])
{
    int count = 0;
    int len_word = strlen(word);

    for (int i = 0; phrase[i] != '\0'; i++)
    {
        if (strncmp(&phrase[i], word, len_word) == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char phrase[200];
    char word[20];
    printf("Digite uma frase: ");
    gets(phrase);
    printf("Digite uma palavra: ");
    gets(word);

    int count = count_string(phrase, word);

    printf("A palavra %s ocorre %d vezes na frase %s", word, count, phrase);

    return 0;
}