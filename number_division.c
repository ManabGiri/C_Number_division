#include<stdio.h>

char * cpOperation="Division";
int operate(int,int);

int main(int argc, char** argv)
{
  int iNumber1, iNumber2 ,iResult;
  printf("Give 1st number\n");
  scanf("%d",&iNumber1);
  printf("Give 2nd number\n");
  scanf("%d",&iNumber2);
  iResult=operate(iNumber1,iNumber2);
  printf("%s of %d by %d is %d\n",cpOperation,iNumber1,iNumber2,iResult);
  return(0);
}
int operate(iNumber1,iNumber2)
{
/*  Here return Division of two number i.e. (iNumber1/iNumber2)   */
    
}
