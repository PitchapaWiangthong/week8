#include<stdio.h>
#include<string.h>
void uniq(char*);

int main()
{
	char s[50];
	char* pS = s ;
	scanf_s("%s", s, 50);
	uniq(pS);
	return 0;
}
void uniq(char *a)
{
	int i = 0;
	while (*(a+i) != '\0')
	{
		if (*(a+i) != *(a+i+1))
		{
			printf("%c", *(a+i));
		}
		i++;
	}
}