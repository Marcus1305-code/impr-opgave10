#include <stdio.h>
#include <math.h>
struct fraction {
    unsigned int numerator;
    unsigned int denominator;
};
struct fraction  fraction_scan(void);
struct fraction fraction_add_fraction(struct fraction* f1, struct fraction* f2);
struct fraction fraction_multiplay_fraction(struct fraction* f1, struct fraction* f2);
struct fraction fraction_multiplay(struct fraction* f1, struct fraction* f2);
void printf_fraction(struct fraction f);

int main(void) {
    // Consider implementing the functions in a library
    // and add tests to check that your function works correctly
    struct fraction f1 = fraction_scan();
    struct fraction f2 = fraction_scan();


   printf_fraction(fraction_multiplay(&f1, &f2)); //ikke helt optimal
   //printf_fraction(fraction_multiplay_fraction(&f1, &f2));
   //printf_fraction(fraction_add_fraction(&f1, &f2));


}
void printf_fraction(struct fraction f) {
    unsigned int num = f.numerator;
    unsigned int den = f.denominator;
    printf("numerator: %u\n", num);
    printf("denominator: %u\n", den);
}
struct fraction fraction_scan(void) {
    unsigned int numerator;
    unsigned int denominator;

    printf("type your numerator\n");
    scanf(" %u", &numerator);
    printf("type your denominator\n");
    scanf(" %u", &denominator);

    struct fraction new_f;
    new_f.numerator = numerator;
    new_f.denominator = denominator;
    return new_f;
}
unsigned int fraction_shorten(unsigned int large_de, unsigned int small_de) {
    unsigned int remainder;
    while (small_de > 0){
        remainder = large_de % small_de;
        large_de = small_de;
        small_de = remainder;
    }
    return large_de;
}
struct fraction fraction_multiplay(struct fraction* f1, struct fraction* f2) {
    f1 -> numerator = f1 -> numerator * f2 -> numerator;
    return *f1;
}
struct fraction fraction_multiplay_fraction(struct fraction* f1, struct fraction* f2) {
    f1 -> numerator *= f2 -> numerator;
    f1 -> denominator *= f2 -> denominator;
    unsigned int divisor = fraction_shorten(f1 -> numerator, f1 -> denominator);
    f1 -> numerator /= divisor;
    f1 -> denominator /= divisor;
    return *f1;
}
struct fraction fraction_add_fraction(struct fraction* f1, struct fraction* f2) {
    unsigned int a = f1->numerator;
    unsigned int b = f2->denominator;
    unsigned int c = f1->numerator;
    unsigned int d = f2->denominator;

    f1->numerator = a * d + c * b;
    f1->denominator = b * d;

    unsigned int divisor = fraction_shorten(f1->numerator, f1->denominator);
    f1 -> numerator /= divisor;
    f1->denominator /= divisor;
    return *f1;
}
