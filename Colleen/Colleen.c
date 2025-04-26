#include <stdio.h>
// meow
void funk(void)
{
	char *s = "#include <stdio.h>%c// meow%cvoid funk(void)%c{%c%cchar *s = %c%s%c;%c%cprintf(s, 10, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 10);%c}%c%cint main(void)%c{%c%c// nya%c%cfunk();%c}%c";
	printf(s, 10, 10, 10, 10, 9, 34, s, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 10);
}

int main(void)
{
	// nya
	funk();
}
