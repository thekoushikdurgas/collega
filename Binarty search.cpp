#include<stdio.h>
int main(){
  int a[20],m=0,c=0,ns,lb=0,ub=19,o;
  printf("\n enter any 20 numbers:");
  for (int i=0;i<20;i++)
     scanf("%d",&a[i]);
  printf("\n enter the search number :");     
  scanf("%d",&ns);     
  while(lb<=ub){
      m=(lb+ub)/2;
      if (ns==a[m]){
          c=1;
          o=m;
          break;
      }
      else if (ns>a[m])
         lb=m+1;
      else if (ns>a[m])
         ub=m-1;
  }
  if(c==1)
    printf("\n the position of the %d in the array is : %d",ns,o);
  else
    printf("%d isn't found",ns);
}
