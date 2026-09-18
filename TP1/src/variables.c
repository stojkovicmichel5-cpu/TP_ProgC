#include <stdio.h>

int main()
{
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    short s = -1000;
    signed short ss = -2000;
    unsigned short us = 4000;

    int i = -50000;
    signed int si = -60000;
    unsigned int ui = 100000;

    long int l = -1000000;
    signed long int sl = -2000000;
    unsigned long int ul = 3000000;

    long long int ll = -5000000000LL;
    signed long long int sll = -6000000000LL;
    unsigned long long int ull = 10000000000ULL;

    float f = 3.14f;
    double d = 3.14159;
    long double ld = 3.141592653589793238L;

    printf("char : %c\n", c);
    printf("signed char : %hhd\n", sc);
    printf("unsigned char : %hhu\n", uc);

    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", l);
    printf("signed long int : %ld\n", sl);
    printf("unsigned long int : %lu\n", ul);

    printf("long long int : %lld\n", ll);
    printf("signed long long int : %lld\n", sll);
    printf("unsigned long long int : %llu\n", ull);

    printf("float : %.2f\n", f);
    printf("double : %.5f\n", d);
    printf("long double : %.15Lf\n", ld);

    return 0;
}