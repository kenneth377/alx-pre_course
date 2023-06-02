#include <stdio.h>

int main(){
	char mychar ;
	printf("Please enter a character: ");
	scanf("%c",&mychar);

	printf("The ASCII value of the letter , %c is %i\n",mychar,mychar);
	//The other way round
	
	int ascii ;
	printf("Please enter the ascii number from 0 - 127 to change: ");
	scanf("%i",&ascii);
	printf("The ASCII LETTER EQUIVALENT OF THE NUMBER, %i is: %c\n", ascii, ascii);


	return 0;
}
