#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "MadeUpString";
    char str2[] = "MadeUpString2";

    //strlwr(str1); // Gör om alla tecken till små bokstäver
    //strupr(str1); // Gör om alla tecken till stora bokstäver
    //strcat(str1, str2); // Lägger till str2 till slutet av str1
    //strncat(str1, str2, 3); // Lägger till 3 tecken från str2 till slutet av str1
    //strcpy(str1, str2); // Kopierar str2 till str1
    //strncpy(str1, str2, 3); // Kopierar 3 tecken från str2 till str1

    //strset(str1, 'a'); // Sätter alla tecken i str1 till 'a'
    //strnset(str1, 'a', 3); // Sätter de 3 första tecknen i str1 till 'a'
    //strrev(str1); // Vänder på strängen

    //int result = strlen(str1); // Returnerar längden på strängen som ett heltal
    //int result = strcmp(str1, str2); // Returnerar 0 om strängarna är lika, annars ett annat värde
    //int result = strncmp(str1, str2, 3); // Returnerar 0 om de 3 första tecknen i strängarna är lika, annars ett annat värde
    //int result = stricmp(str1, str2); // Returnerar 0 om strängarna är lika, annars ett annat värde (inte case sensitive)
    //int result = strnicmp(str1, str2, 3); // Returnerar 0 om de 3 första tecknen i strängarna är lika, annars ett annat värde (inte case sensitive)
    

    printf("%s", str1);
    return 0;
}