#include<stdio.h>
int main()
{
int n, remainder,originalInteger,reversedInteger=0;
printf("Enter the element");
scanf("%d",&n);
originalInteger=n;
while(n!=0)
{
    remainder=n/10;
    reversedInteger=reversedInteger*10+remainder;
    n=n/10;
}
if(originalInteger==reversedInteger)
  printf("%d is a palindrome",originalInteger);
else
  printf("%d is not a palindrome",originalInteger);
return 0;
}
