#include <stdio.h>
int main()
{
int n,m,rev=0,r;
printf("enter a number");
scanf("%d",&n);
m=n;
while(n!=0) {
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("reverse of the number is:%d",rev);
if (rev==m)
  printf("palindrome");
else
  printf("not a palindrome");
return 0;
}
