#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

	char* str = argv[1];
	char* res;
	res= (char* ) malloc (strlen(str)*2+1);

	int dupCount=0; 
	char currCarr;

	int containsDigits=0;
	int i;
	int buffboy=0;
	for (i=0; i < strlen(str); i++){
		if (str[i] >= '0' && str[i]<='9')	{
			containsDigits=1;
			break;
		}
		if (i==0){
			currCarr=str[i];
		}
		if (i==strlen(str)-1){
			if (currCarr==str[i]) {
				dupCount++;
				buffboy += sprintf(res+buffboy, "%c", str[i]);
				buffboy+= sprintf(res+buffboy, "%d", dupCount);
			}
			else {
				buffboy+=sprintf(res+buffboy, "%c", currCarr);
				buffboy+=sprintf(res+buffboy, "%d", dupCount);
				buffboy+=sprintf(res+buffboy, "%c", str[i]);
				buffboy+=sprintf(res+buffboy, "%d", 1);
			}
		}
		else {
			if (currCarr==str[i]){
				dupCount++;
			} 
			else {
				buffboy+=sprintf(res+buffboy, "%c", currCarr);
				buffboy+=sprintf(res+buffboy, "%d", dupCount);
				currCarr=str[i];
				dupCount=1;
			}
		}

	}
	if (containsDigits==1) {
		printf("%s\n", "error");
	}
	else{
		if (strlen(res) <= strlen(str)){
			printf("%s\n", res);
		}
		else {
			printf("%s\n", str);
		}

	}



	return 0;
}