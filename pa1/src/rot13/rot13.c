#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char* res;
	char * str = argv[1];
	res= (char* ) malloc (strlen(str)+1);
	int i;
	for (i=0; i < strlen(str); i++){
		char c = str[i];
		if (c>= 'a' && c <= 'm'){
			c+=13;
		}
		else if (c>= 'n' && c <= 'z'){
			c-=13;
		}
		else if (c>= 'A' && c <= 'M'){
			c+=13;
		}
		else if (c>= 'N' && c <= 'Z'){
			c-=13;
		}

		res[i]=c;

	}
	res[i]='\0';
	printf("%s\n", res);
	
	return 0;
}