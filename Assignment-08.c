#include<stdio.h>
 int main ()

 {
     int a, b, c;
     printf ("Enter the value a,b,&c");
     scanf ("%d%d%d",&a,&b,&c);
     if ((a<b) && (a<c))
        printf ("Lowest no=%d",a);
     else if ((b<a)&& (b<c))
        printf ("Lowest no=%d",b);
     else
        printf ("Lowest no=%d",c);
 }
