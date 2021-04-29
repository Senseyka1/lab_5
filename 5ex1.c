#include <stdio.h>

int main(){
    int a[20];
    int b[20];
    int c[20];
    int i,n;

    printf("Введіть розмір массивів: "); scanf("%d",&n);
    printf("Массив a:\n");
    for(i=0;i<n;i++)
    {
     printf("a[%d]=",i);
     scanf("%d",&a[i]);
    }

    printf("Массив b:\n");
    for(i=0;i<n;i++)
    {
     printf("b[%d]=",i);
     scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
     printf("\n");
     a[i] = a[i] * a[i];
     printf(" Квадрат елемента  a[%d]  =  %d\n",i,a[i]);
     b[i] = b[i] * b[i];
     printf(" Квадрат елемента b[%d] = %d\n",i,b[i]);
    }
    printf("---------------Відповідь--------------\n");
    printf("Сума квадратів елементів a i b:\n");

    for(i=0;i<n;i++)
    {
    c[i] = a[i] + b[i];
     printf("c[%d] = %d\n",i,c[i]);
    }
     
        return 0;
}
   
