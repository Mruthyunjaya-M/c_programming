#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <sys/time.h>

int main()
{
  printf("# C Data Types\n");
  printf("## Integer Types\n");
  printf("- Size of `bool`:                   %2ld bytes (%ld bits)\n", sizeof(bool), sizeof(bool)*8);
  printf("- Size of `size_t`:                 %2ld bytes (%ld bits)\n", sizeof(size_t), sizeof(size_t)*8);
  printf("- Size of `char`:                   %2ld bytes (%ld bits)\n", sizeof(char), sizeof(char)*8);
  printf("- Size of `signed char`:            %2ld bytes (%ld bits)\n", sizeof(signed char), sizeof(signed char)*8);
  printf("- Size of `unsigned char`:          %2ld bytes (%ld bits)\n", sizeof(unsigned char), sizeof(unsigned char)*8);
  printf("- Size of `short`:                  %2ld bytes (%ld bits)\n", sizeof(short), sizeof(short)*8);
  printf("- Size of `signed  short`:          %2ld bytes (%ld bits)\n", sizeof(signed short), sizeof(signed short)*8);
  printf("- Size of `Unsigned short`:         %2ld bytes (%ld bits)\n", sizeof(unsigned short), sizeof(unsigned  short)*8);
  printf("- Size of `short int`:              %2ld bytes (%ld bits)\n", sizeof(short int), sizeof(short int)*8);
  printf("- Size of `signed short int`:       %2ld bytes (%ld bits)\n", sizeof(signed short int), sizeof(signed short int)*8);
  printf("- Size of `unsigned short int`:     %2ld bytes (%ld bits)\n", sizeof(unsigned short int), sizeof(unsigned short int)*8);
  printf("- Size of `int`:                    %2ld bytes (%ld bits)\n", sizeof(int), sizeof(int)*8);
  printf("- Size of `signed int`:             %2ld bytes (%ld bits)\n", sizeof(signed int), sizeof(signed int)*8);
  printf("- Size of `unsigned int`:           %2ld bytes (%ld bits)\n", sizeof(unsigned int), sizeof(unsigned int)*8);
  printf("- Size of `unsigned`:               %2ld bytes (%ld bits)\n", sizeof(unsigned), sizeof(unsigned)*8);
  printf("- Size of `long int`:               %2ld bytes (%ld bits)\n", sizeof(long int), sizeof(long int)*8);
  printf("- Size of `long`:                   %2ld bytes (%ld bits)\n", sizeof(long), sizeof(long)*8);
  printf("- Size of `unsigned long int`:      %2ld bytes (%ld bits)\n", sizeof(unsigned long int), sizeof(unsigned long int)*8);
  printf("- Size of `unsigned long`:          %2ld bytes (%ld bits)\n", sizeof(unsigned long), sizeof(unsigned long)*8);
  printf("- Size of `unsigned long long`:     %2ld bytes (%ld bits)\n", sizeof(unsigned long long), sizeof(unsigned long long)*8);
  printf("\n");
  printf("Note that the following are equivalent -- the first is a shorthand for the second:\n");
  printf("\n");
  printf("- `short` and `short int`\n");
  printf("- `unsigned` and `unsigned int`\n");
  printf("- `long` and `long int`\n");
  printf("- `unsigned long` and `unsigned long int`\n");
  printf("\n");
  printf("## Floating-Point Types\n");
  printf("- Size of `float`:       %2ld bytes (%ld bits)\n", sizeof(float), sizeof(float)*8);
  printf("- Size of `double`:      %2ld bytes (%ld bits)\n", sizeof(double), sizeof(double)*8);
  printf("- Size of `long double`: %2ld bytes (%ld bits)\n", sizeof(long double), sizeof(long double)*8);
  printf("\n");
  printf("## Some special structure Types\n");
  printf("- Size of `clock_t`:              %2ld bytes (%ld bits)\n", sizeof(clock_t), sizeof(clock_t)*8);
  printf("- Size of `time_t`:               %2ld bytes (%ld bits)\n", sizeof(time_t), sizeof(time_t)*8);
  printf("- Size of `struct tm`:            %2ld bytes (%ld bits)\n", sizeof(struct tm), sizeof(struct tm)*8);
  printf("- Size of `struct timeval`:       %2ld bytes (%ld bits)\n", sizeof(struct timeval), sizeof(struct timeval)*8);
  printf("\n");
  printf("## Size of constant Types\n");
  printf("- Size of `size of 'a':                                                          %2ld bytes (%ld bits)\n", sizeof('a'), sizeof('a')*8);
  printf("- Size of `size of 'abcde':                                                      %2ld bytes (%ld bits)\n", sizeof("abcde"), sizeof("abcde")*8);
  printf("- Size of `size of 423:                                                          %2ld bytes (%ld bits)\n", sizeof(423), sizeof(423)*8);
  printf("- Size of `size of 4343243253425435342543254326326565463615435342534254325423:   %2ld bytes (%ld bits)\n", sizeof(4343243253425435342543254326326565463615435342534254325423), sizeof(4343243253425435342543254326326565463615435342534254325423)*8);
  printf("- Size of `size of 4.23:                                                         %2ld bytes (%ld bits)\n", sizeof(4.23), sizeof(4.23)*8);
  printf("- Size of `size of 42424242424235435.235435436365265465465464566546543543253:    %2ld bytes (%ld bits)\n", sizeof(42424242424235435.235435436365265465465464566546543543253), sizeof(42424242424235435.235435436365265465465464566546543543253)*8);
  
  return 0;
}

#if 0
OUT PUT IN RASPBERRY PI 4 using noobs 32 bit OS / getconf LONG_BIT 32
# C Data Types
## Integer Types
- Size of `bool`:                    1 bytes (8 bits)
- Size of `size_t`:                  4 bytes (32 bits)
- Size of `char`:                    1 bytes (8 bits)
- Size of `signed char`:             1 bytes (8 bits)
- Size of `unsigned char`:           1 bytes (8 bits)
- Size of `short`:                   2 bytes (16 bits)
- Size of `signed  short`:           2 bytes (16 bits)
- Size of `Unsigned short`:          2 bytes (16 bits)
- Size of `short int`:               2 bytes (16 bits)
- Size of `signed short int`:        2 bytes (16 bits)
- Size of `unsigned short int`:      2 bytes (16 bits)
- Size of `int`:                     4 bytes (32 bits)
- Size of `signed int`:              4 bytes (32 bits)
- Size of `unsigned int`:            4 bytes (32 bits)
- Size of `unsigned`:                4 bytes (32 bits)
- Size of `long int`:                4 bytes (32 bits)
- Size of `long`:                    4 bytes (32 bits)
- Size of `unsigned long int`:       4 bytes (32 bits)
- Size of `unsigned long`:           4 bytes (32 bits)
- Size of `unsigned long long`:      8 bytes (64 bits)

Note that the following are equivalent -- the first is a shorthand for the second:

- `short` and `short int`
- `unsigned` and `unsigned int`
- `long` and `long int`
- `unsigned long` and `unsigned long int`

## Floating-Point Types
- Size of `float`:        4 bytes (32 bits)
- Size of `double`:       8 bytes (64 bits)
- Size of `long double`:  8 bytes (64 bits)

## Some special structure Types
- Size of `clock_t`:               4 bytes (32 bits)
- Size of `time_t`:                4 bytes (32 bits)
- Size of `struct tm`:            44 bytes (352 bits)
- Size of `struct timeval`:        8 bytes (64 bits)

## Size of constant Types
- Size of `size of 'a':                                                           4 bytes (32 bits)
- Size of `size of 'abcde':                                                       6 bytes (48 bits)
- Size of `size of 423:                                                           4 bytes (32 bits)
- Size of `size of 4343243253425435342543254326326565463615435342534254325423:    8 bytes (64 bits)
- Size of `size of 4.23:                                                          8 bytes (64 bits)
- Size of `size of 42424242424235435.235435436365265465465464566546543543253:     8 bytes (64 bits)
#endif


