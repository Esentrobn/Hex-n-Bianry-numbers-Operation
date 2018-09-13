#ifndef _BinaryOpsInC
#define _BinaryOpsInC

#ifdef _BIN_
#define DISPLAY(num) printf("\t 1 - Display number in BINARY \n")
#define PRINT(input) (displayBinary(input))
#define SLC(input) {input = (input << 1) | (input >> (sizeof(input)*8 - 1)); displayBinary(input);}
#define COMPLEMENT(input) (displayBinary(complement(input)))
#define SRC(input) {input = (input >> 1) | (input << (sizeof(input)*8 - 1)); displayBinary(input);}
#endif


#ifdef _HEX_
#define DISPLAY(input) (printf("\t 1 - Display number in HEXADECIMAL \n"))
#define PRINT(input) (printf("0x%X\n", input))
#define SLC(input) {input = (input << 4) | (input >> (sizeof(input)*8 - 4)); (printf("0x%X\n", input));}
#define SRC(input) {input = (input >> 4) | (input << (sizeof(input) * 8 - 4));(printf("0x%X\n",input));}
#define COMPLEMENT(input) (printf("%X\n", complement(input)))
#endif


#endif 