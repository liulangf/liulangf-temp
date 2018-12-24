#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <signal.h>

void (*signal(int sig, void (*func)(int)))(int);

void assert(int expression);

int main(void) 
{
	printf("Hello\n");
	return(0);
}

size_t (strlen) (const char *s) 
{
	const char *sc;
	for (sc = s; *sc != '\0'; ++sc)
		;
	return (sc - s);


}