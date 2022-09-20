#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'a'; //Singulär char betecknas sedan med %c
    char b[] = "b"; //Array av char betecknas sedan med %s

    float c = 3.141592; //Float betecknas sedan med %f och täcker upp till 6 decimaler
    double d = 3.141592653589793; //Double betecknas sedan med %lf och täcker upp till 15 decimaler

    bool e = true; //Bool betecknas sedan med %d

    char f = 100; //Char betecknas sedan med %c och kan även skrivas ut som en integer med %d och rymmer -128 till 127
    unsigned char g = 255; //Unsigned char betecknas sedan med %c och kan även skrivas ut som en integer med %d och rymmer 0 till 255

    short int h = 32767; //Short int betecknas sedan med %d och rymmer -32768 till 32767
    unsigned short int i = 65535; //Unsigned short int betecknas sedan med %d och rymmer 0 till 65535

    int j = 2147483647; //Int betecknas sedan med %d och rymmer -2147483648 till 2147483647
    unsigned int k = 4294967295; //Unsigned int betecknas sedan med %d och rymmer 0 till 4294967295

    long long int l = 9223372036854775807; //Long long int betecknas sedan med %lld och rymmer -9223372036854775808 till 9223372036854775807
    unsigned long long int m = 18446744073709551615; //Unsigned long long int betecknas sedan med %llu och rymmer 0 till 18446744073709551615

    printf("%c\n", a); //char
    printf("%s\n", b); //char array
    printf("%f\n", c); //float
    printf("%lf\n", d); //double
    printf("%d\n", e); //bool
    printf("%d\n", f); //char as numeric value
    printf("%d\n", g); //unsigned char as numeric value
    printf("%d\n", h); //short int as numeric value
    printf("%d\n", i); //unsigned short int as numeric value
    printf("%d\n", j); //int as numeric value
    printf("%d\n", k); //unsigned int as numeric value
    printf("%lld\n", l); //long long int as numeric value
    printf("%llu\n", m); //unsigned long long int as numeric value


    return 0;
}