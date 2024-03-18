#include<stdio.h>
#include<conio.h>
int fib ( int);
int main () 
{ int n,i;
/*clscr();*/
printf("enter no of term\n");
scanf("%d",&n);
printf("fibonacci series:\n");
for (i=0;i<n;i++)  
{
 printf("%d\t",fib(i));

}
getch();

 <!DOCTYPE html>
<html>
  <head>
    <title>Hello, World!</title>
    
  </head>
  <body>
    
      <h1 class="title">Hello Hashim! </h1>
      
  </body>
</html>
}
int fib(int i)
{  
if(i==0)
return 1;
else
return(fib(i-1)+(i-2));

}
