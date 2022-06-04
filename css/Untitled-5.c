
#include <stdio.h>


#include <unistd.h>

//ex 04

void	ft_div_mod(int a, int b, int *div, int *mod)
{

	if (b != 0)
	{
		*div = a / b ;
		*mod = a % b ;
		/* code */
		
	}
	
	
}

int main()
{
	int a;
	int b;
	int x;
	int y;

	a = 5;
	b = 10;

	ft_div_mod(a, b , &x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	
	return 0;
}



//ex05

void ft_putstr(char *str){

	char i;

	i = 0;

	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
		/* code */
	}	
}
int main()
{
	char *c = "OUSSAMA";

	ft_putstr(c);


	/* code */
	return 0;
}


