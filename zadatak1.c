#include"functions.h"

int main(int argc, char **argv) {
	int i = 0;
	char *str;
	if(argc <= 2)
		printf("Potrebno je unijeti barem 3 argumenta!");
	else{
		while(i + 1 < argc - 1) {
			i++;
			switch(atoi(argv[argc - 1])) {
				case 1:
					all_caps(argv[i]);
					break;
				case 2:
					sort_leters(argv[i]);
					break;
				case 3:
					no_numbers(argv[i]);
					break;
				case 4:
					if(palindrom_check(argv[i]) == -1)
						printf("Ova rijec nije palindrom.\n");
					else
						printf("Ova rijec (%s) je palindrom.\n", argv[i]);
					break;
				default:
					printf("Pogresna opcija!\n");
					exit(1); 
			}
		}

	}
	printf("\n");
	return 0;
}
