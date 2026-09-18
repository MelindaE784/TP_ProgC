#include <stdio.h>

int main() {
    char c = 'A';
    unsigned char uc = 200;

    short s = -100;
    unsigned short us = 100;

    int i = -12345;
    unsigned int ui = 12345;

    long int li = -123456789;
    unsigned long int uli = 123456789;

    long long int lli = -123456789012;
    unsigned long long int ulli = 123456789012;

    float f = 3.14f;
    double d = 3.14159;
    long double ld = 3.141592653589793L;

    printf("char : %c\n", c);
    printf("unsigned char : %u\n", uc);

    printf("short : %hd\n", s);
    printf("unsigned short : %hu\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %f\n", f);
    printf("double : %f\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}