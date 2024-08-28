#include <stdio.h>
#include "base_converter.h"

void f(int arr[7]) {
    arr[0] = 12;
}

int main() {
    bool bin[32];

    uint32_t test1_input = 8425325;
    int32_t test2_input = -34536342;
    float test3_input = 123.565;

    printf("\n====== TEST 1: UNSIGNED INTEGER ======\n");
    printf("Input: %u", test1_input);
    convert_dec2bin_unsigned_integer(test1_input, bin);
    printf("\nOutput:");
    printf("\n%-23s: ", "Convert to binary");
    print_bin(bin);
    printf("\n%-23s: %u", "Convert back to decimal", convert_bin2dec_unsigned_integer(bin));
    printf("\n");

    printf("\n====== TEST 2: SIGNED INTEGER ======\n");
    printf("Input: %d", test2_input);
    convert_dec2bin_signed_integer(test2_input, bin);
    printf("\nOutput:");
    printf("\n%-23s: ", "Convert to binary");
    print_bin(bin);
    printf("\n%-23s: %d", "Convert back to decimal", convert_bin2dec_signed_integer(bin));
    printf("\n");

    printf("\n====== TEST 3: FLOATING POINT NUMBER - IEEE754 ======\n");
    printf("Input: %g", test3_input);
    convert_dec2bin_ieee754_32bits(test3_input, bin);
    printf("\nOutput:");
    printf("\n%-23s: ", "Convert to binary");
    print_bin(bin);
    printf("\n%-23s: %.32g", "Convert back to decimal", convert_bin2dec_ieee754_32bits(bin));
    printf("\n");
}