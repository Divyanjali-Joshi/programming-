 #include <stdio.h>
#include <ctype.h>   // for isalpha(), isdigit()

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i;

    printf("Enter a string: ");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++) {
        
        if (strchr("aeiouAEIOU", str[i])) {
            vowels++;
        } 
        
        else if (isalpha(str[i])) {
            consonants++;
        }
        
        else if (isdigit(str[i])) {
            digits++;
        }
        
        else if (str[i] != '\n' && str[i] != ' ') {
            special++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", special);

    return 0;
}
