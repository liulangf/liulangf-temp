#include <stdio.h>


#define Black   "\033[30m"
#define Red     "\033[31m"
#define Green   "\033[32m"
#define Yellow  "\033[33m"
#define Blue    "\033[34m"
#define Magenta "\033[35m"
#define Cyan    "\033[36m"
#define White   "\033[37m"
#define Reset   "\033[0m"


void with_color(char *c, char *arg);

int main(int argc, char const *argv[])
{
	printf("%s hello %s [%s]\n", argv[0], Red, argv[1]);
	printf("%s\n", Reset);


	with_color(Green, "A\n");



	return 0;
}


void with_color(char *c, char *arg)
{
	printf("%s%s%s", c, arg, Reset);
}