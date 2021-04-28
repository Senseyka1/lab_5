#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

        int i, a[100], b=0;
        int n, min, sum = 0, index = 0;
        srand(time(0));
        const int Low=-100 , High= 100;

        char ch;
        printf("Виберіть свій варіант для вирішення масиву: \n");
        printf("1: Введіть ваш масив\n");
        printf("2: Рандом\n");
        printf("Відповідь: ");
        
        scanf("%c",&ch);
        switch(ch)
     {

        case '1':
        printf("\nВведіть розмір массиву: "); scanf("%d",&n);
        for(i=0;i<n;i++)
        {
           printf("a[%d]=",i);
           scanf("%d",&a[i]);
           if(a[i] < 0) b++;

        }
        break;

        case '2':
        printf("\nВведіть розмір массиву: "); scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        a[i] = Low+rand()%High;
        printf("a[%d] = %d\n",i,a[i]);
        if(a[i] < 0) b++;
        }
        break;
      default: printf("\n---------------------!Помилка!-----------------------\n"); break;
   }
        printf("\n---------------------Відповідь-----------------------");
        printf("\nКількість негативних елементів масиву   = %d",b);

        min = a[0];
        for(i = 0; i < n; i++)
        {
        if(a[i] < min)
           {
           min = a[i];
           index = i;
           index++;
           }
        }

       for(i = index; i < n; i++)
        {
         sum += a[i];
        }
         printf("\n-----------------------------------------------------");
         printf("\nМинимальний елемент масиву              = %d",min);
         printf("\n-----------------------------------------------------");
         printf("\nСума після мінімального елементу масиву = %d",sum);

        return 0;
}
 
