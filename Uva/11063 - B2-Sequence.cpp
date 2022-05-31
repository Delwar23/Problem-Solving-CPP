#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int cases, i, number[102], caseno = 0;
	while(scanf("%d", &cases) == 1)
	{
	    int count = 0;
		for(i = 1; i <= cases; i++)
		{
			scanf("%d", &number[i]);
		}
		for(i = 1; i <= cases; i++)
		{
			if(number[i+1] - number[i] == number[i])
			{
				count = 1;
			}
		}
		if(count == 1)
		{
			printf("Case #%d: It is a B2-Sequence.\n", ++caseno);
		}
		else
		{
			printf("Case #%d: It is not a B2-Sequence.\n", ++caseno);
		}
		if(caseno > 0)
		{
			printf("\n");
		}
	}
	return 0;
}
