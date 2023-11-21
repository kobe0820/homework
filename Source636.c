#include <stdio.h>

void antiString(char*String)
{
	if (*String == '\0')
		return;
	antiString(String + 1);
	printf("%c", *String);

}

int main()
{
	char S[100];
	printf("Inter String:");
	scanf("%s", &S);
	antiString(S);
	printf("\n");


}
