#include<stdio.h>
int main()
{
  const var = 5;
  var = 6;
  printf("%d",var);
  return 0;
}
//ERROR : Assingment of read only variable
