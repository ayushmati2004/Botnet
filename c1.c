#include <stdio.h>

int add(int );
int main()
{int n;
printf("Enter the value of :-");
scanf("%d",&n);
int k=0;
k=add(n);
printf("the sum of %d number is %d",k);
return 0;
}
int add(int n)
{int sum=0;
for(int i=1;i<=n;i++)
sum=sum+i;
return sum;

}
