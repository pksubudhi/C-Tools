#include <stdio.h>
#include <string.h>


void put_string(char *s) {

	strcat(s,"\n");
   // PUT YOUR CODE HERE
	while(*s!='\0')
	{
		fputc(*s, stdout);
		s++;
	}
}
int main(int argc, char argv[])
{
	char str[]="Sare jahan se acha hindustan hamara";
	put_string(str);
}
