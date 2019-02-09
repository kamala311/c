#include <stdio.h>

int main(void) {
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i!=6)
        {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        }
    }
	// your code goes here
	return 0;
}
