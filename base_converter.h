#ifndef BASE_CONVERTER_H
#define BASE_CONVERTER_H

#include <stdint.h>
#include <stdbool.h>

void print_bin(const bool bin[32]);
void convert_dec2bin_unsigned_integer(const uint32_t in_dec, bool out_bin[32]);
void convert_dec2bin_signed_integer(const int32_t in_dec, bool out_bin[32]);
void convert_dec2bin_ieee754_32bits(const float in_dec, bool out_bin[32]);

uint32_t convert_bin2dec_unsigned_integer(const bool in_bin[32]);
int32_t convert_bin2dec_signed_integer(const bool in_bin[32]);
float convert_bin2dec_ieee754_32bits(const bool in_bin[32]);

#endif