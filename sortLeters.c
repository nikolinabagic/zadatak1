#include"functions.h"

void sort_leters(char str_array[]) {
	int i, j, a, l = strlen(str_array) - 1;

	for(i = 0; i < l; ++i) {
		for(j = i + 1; j < l; ++j) {
			if(str_array[i] > str_array[j]) {
				a = str_array[i];
				str_array[i] = str_array[j];
				str_array[j] = a;
			}
		}
	}
	i = 0;
	while(i <= l){
		printf("Niz sortiran po abecedi: %c\n", str_array[i]);
		i++;
	}
}
