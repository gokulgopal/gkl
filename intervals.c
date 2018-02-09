#include<stdio.h>
void main()
{
    int a,b,g;
    printf("enter the intervals\n");
    scanf("%d%d",&a,&b);
    for(g=a;g<=b;g++)
    { 
        if(g%2!=0)
        printf("%d\n",g);
}
}
