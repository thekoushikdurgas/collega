#include<stdio.h>
int main(){
    int a[100],t=0,b;
    printf("Enter the number of array:");
    scanf("%d",&b);
    printf("Enter the array :");
    for(int i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(int j=0;j<b-1;j++){
        for(int k=0;k<b-j-1;k++){
            if (a[k]>a[k+1]){
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    } 
    printf("After Bubble sort ,the array is:");
    for(int y=0;y<b;y++)
        printf("%d,",a[y]);
}
