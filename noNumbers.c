#include"functions.h"

void *no_numbers(char *str_array) {
	while(*str_array != '\0'){
		if(!(*str_array >= 0x30 && *str_array <= 0x39)) {
			printf("%c", *str_array);
		}
		str_array++;
	}
	printf(" ");
}
		