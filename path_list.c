#include<stdio.h>
/*
Listing content of PATH environmental variable

*/
char **tokenize(char *, char);
int main(int argc, char *argv[])
{
	char **pl;
	int i;
	char* str = (char *)getenv("PATH");
	printf("PATH=%s",str);
	printf("\n\nList of path are******\n");
	pl=tokenize(str, ';');
	for(i=0;i<pl[i]!=NULL;i++)
	{
		printf("%s\n",pl[i]);
	}
	return 0;
}
char **tokenize(char *path_val, char sep)
{
	char *path_list[400];
	char *temp[400];
	int i=0, j=0, k=0;
	for(; path_val[i]!=NULL;i++)
	{
		if(path_val[i]!=sep)
		{
			temp[j]=path_val[i];
			j++;
		}
		else
		{
			temp[j]='\0';
			j=0;
			strcpy(path_list[k],temp);
			k++;
		}
	}
	return path_list;
	
}
