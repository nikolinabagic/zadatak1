#include"functions.h"

int palindrom_check(char str_array[]) {
	int i = 0, l = strlen(str_array) - 1;
	while(i <= l) {
		if(str_array[i] == str_array[l]) {
			i++;
			l--;
		}
		else
			return -1;
	}
	return 0;
}
