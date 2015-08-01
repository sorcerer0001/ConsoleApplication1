#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
  char st[500];
  int uc = 0, dc = 0, k = 0, arr[2];
  gets(st);
  for (int i = 0; st[i] != '\0'; i++){
    if ((int)st[i] != 32 && k == 0)
    {
      uc = i;
      k = 1;
    }
    if ((int)st[i] == 32 && k == 1)
    {
      dc = i;
      k = 0;
      if (dc - uc>arr[1])
      {
        arr[0] = uc;
        arr[1] = dc - uc;
      }
    }
  }
  for (int i = arr[0]; i < arr[1]; i++)
  {
    printf("%c",st[i]);
  }

  return  0;
}