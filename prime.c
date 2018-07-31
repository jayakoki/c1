#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("Enter the positive number");
scanf("%d",&n);
for(i=0;i<n,i++)
{
 if(n%i==0)
 {
    flag=1;
    break;
    
  }
  if(flag==0)
    printf("%d is a prime number",n);
  else
    printf("%d is not an  prime number",n);
  return 0;
}
  
