#include <unistd.h>

int main(void)
{
	char a = 'a';
	write(1, &a, 1);
}
