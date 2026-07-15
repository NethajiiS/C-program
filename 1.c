#include<stdio.h>
int main()
{
	int i,j,a,b,c,d;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			a=1;
			while(a<=i)
			{
				b=1;
				while(b<=i)
						{
						printf("%d %d %d %d\n", i,j,a,b);
						b++;
				
						}
                                 a++;
				}
			j++;
			}
		printf("\n");
		i++;
		}
	}
