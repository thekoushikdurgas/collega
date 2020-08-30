#include<stdio.h>
int main (){
    int b=20;
    int a[20];
    printf("enter the 20 numbers :");
    for(int j=0;j<b;j++){
        scanf("%d",&a[j]);
    }
    int c;
    scanf("%d",&c);
    int re=0;
    for (int i=0;i<b;i++){
        if (a[i]==c){
          printf("the position of the %d in the array by linear search is : %d",c,i);
          re++;
        }
    }
    if (re==0)
     printf("%d isn't found the array",c);
}
