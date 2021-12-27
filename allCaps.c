#include"functions.h"

void *all_caps(char *str_array) {
	while(*str_array != '\0') {
		printf("%c", toupper(*str_array));
		str_array++;
	}
	printf(" ");
}