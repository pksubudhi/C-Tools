#include <stdio.h>


void get_string(char *s, int size, FILE *stream) {
   
    int i=0;
    int ch;
    ch=fgetc(stream);
    while( (ch!=EOF)&&(i<size-1)&&(ch!='\n'))
    {
    	s[i]=ch;
    	i++;
    	ch=fgetc(stream);
	}
	if(ch=='\n')
	{
		s[i]='\n';
		i++;
	}
	s[i]='\0';
	return;
}
int main(int argc, char *argv[])
{
	FILE *fp;
	fp=fopen("abc.txt", "r");
	char str[15];
	get_string(str, 15, fp);
	printf("%s",str);
}

