#include <stdio.h>
#include<stdio.h>
#include<conio.h>
main()
{
    printf("PROOGRAM BILANGAN GANJIL DAN GENAP\n");
    printf("BY M Achmad Sahroni NIM 311620782\n");
    printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
	int x;
	printf("masukan bilangan :");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d adalah bilangan genap\n\n",x);

	}
	else
	{
		printf("%d adalah bilangan ganjil\n\n",x);
	}
	printf ("PAUSE");
}
