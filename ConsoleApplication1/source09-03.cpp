#include <stdio.h>

int main()
{	

	float N,K;
	while(scanf("%f %f",&N,&K)!=EOF)
	{
		int i;

		float li=1.0;
		for(i=1;i<=20;i++)
		{	
			if(i*N>=200*li)
			{
				break;
			}
			li=li*(1+K/100.0);
		}
		if(i==21)
			printf("Impossible\n");
		else
			printf("%d\n",i);
	}
	return 0;
}