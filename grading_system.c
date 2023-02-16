//Grading system 
#include<stdio.h>
int main()
{
  int accounting,calculus,algebra,average;
  printf("\n Enter marks for accounting,calculus and algebra:");
  scanf("%d,%d,%d",&accounting,&calculus,&algebra);
  average=(accounting+calculus+algebra)/3;
  if("average>=70 && average<=100"){
    printf("A");
    }
  else if("average>=60 && average<=69"){
    printf("B");
    }
  else if("average>=50 && average<=59"){
    printf("C");
    }
  else if("average>=40 && average<=49"){
    printf("D");
    }
  else {
    printf("fail");
    }
  return 0; 
  }
