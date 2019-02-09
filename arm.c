#include <stdio.h>

int main() {
    int n,r,cube,sum,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        cube=r*r*r;
        sum=sum+cube;
        n=n/10;
        
    }
    if(temp==sum)
    {
        printf("yes\n");
    }
    else 
    {
    printf("no\n");
    }
	return 0;
}

