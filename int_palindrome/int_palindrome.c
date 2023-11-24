#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void    reverse(char str[], int length)
{
    int     start;
    int     end;

    start = 0;
    end = length - 1;
    while (start < end)
    {
        char temp;

        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Fonction permettant de passer du int au ascii, elle convertit un nombre entier en une chaine de caractere representant ce nombre
char    *itoa(int num, char *str, int base)
{
        // Variable d'index pour la chaine de caractere
        int     i;
        // Indicateur poour suivre si le nombre est negatif
        int     is_negative;

        i = 0;
        is_negative = 0;
        // Verifie si le nombre est zero
        if (num == 0)
                str[i++] = '0';
        else
        {
		// Verifie si le nombre est negatif et que la base est 10 (decimale)
                if (num < 0 && base == 10 && num > -2147483648)
                {
                        is_negative = 1;
			// Rend le nombre positif pour le traiter ulterieurement
                        num = -num;
                }
		// Convertit le nombre dans la base specifiee
                while (num != 0)
                {
			// Obtient le reste de la division
                        int     rem = num % base;
			// Converit le reste en caractere et le stocke dans la chaine de caractere
                        str[i++] = rem + '0';
			// Met a jour le nombre en le divisant par la base
                        num = num / base;
                }
		// Ajoute '-' a la chaine de caracteres si le nombre etait initialement negatif
                if (is_negative)
                        str[i++] = '-';
		// Termine la chaine de caractere par un caractere de fin
                str[i] = '\0';
		// Inversion de la chaine de caractere etant dans le sense inverse
                reverse(str, i);
	}
    return str;
}

bool isPalindrome(int x) 
{
	// Declartion des variables
    int     i;
    int     y;
    char    str[20];

    // Conversion de l'entier en chaine de caractere
    itoa(x, str, 10);
    // Initialisation des indices de comparaisons
    i = 0;
    y = strlen(str) - 1;
    // Affichage de la chaine pour verification
    printf("%s\n", str);
    // Boucle de comparaison des caracteres
    while (i < y)
    {
	// Verification si les caracteres aux indices i et y sont differentes
        if (str[i] != str[y])
        {
	    // Affichage en cas de non-palindrome
            printf("It's not a palindrom");
	    // Retourne false pour indiquer aue ce n'est pas un palindrome
            return false;
        }
	// Passage aux indices suivants
        i++;
        y--;
    }
    // Affichage en cas de palindrome
    printf("It's a palindrom");
    // Retourne true pour indiquer que c'est un palindrme
    return true;
}

int main() 
{
    int num = 212;
    isPalindrome(num);
    return 0;
}
