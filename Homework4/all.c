#include <stdio.h>

int main()
{
    int a, b;
    printf("Birinci ededi daxil edin:");
    scanf("%d",&a);
    printf("İkinci ededi daxil edin:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("En böyük eded:%d\n",a);
    }
    else if(a<b)
    {
        printf("En böyük eded:%d\n",b);
    }
    else
    {
        printf("Ededler beraberdir\n");
    }
	return 0;
}

