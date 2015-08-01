#include<stdio.h>
#include<string.h>
void main()
{
 int i;
 char a[80],b[80];
 scanf(a);
 scanf(b);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]>='a'&&a[i]<='z')
   a[i]=a[i]-32;
 if(a[i]>='A'&&a[i]<='Z')
  continue;
}
for(i=0;b[i]!='\0';i++)
{
  if(b[i]>='a'&&b[i]<='z')
    b[i]=b[i]-32;
  if(b[i]>='A'&&b[i]<='Z')
    continue;
}
if(strcmp(a,b)<0)
  printf("<");
if(strcmp(a,b)>0)
  printf(">");
if(strcmp(a,b)==0)
  printf("=");
}