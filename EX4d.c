# include <stdio.h>
void main()
{
  int i, j, k, Arr[10], Group[10]={0};
  printf("\n");
   for(i=0;i<10;i++)
    {
     do
      {
       printf("Enter The Marks Of Student %d...", i+1);
       scanf("%d", &Arr[i]);
        if(Arr[i]<0 || Arr[i]>100)
         printf("Marks Should Be In The Range Of 0-100 Only.");
      }while(Arr[i]<0 || Arr[i]>100);
     if(Arr[i]>=0 && Arr[i]<=10)
      Group[0]++;
     else if(Arr[i]>=11 && Arr[i]<=20)
      Group[1]++;
     else if(Arr[i]>=21 && Arr[i]<=30)
      Group[2]++;
     else if(Arr[i]>=31 && Arr[i]<=40)
      Group[3]++;
     else if(Arr[i]>=41 && Arr[i]<=50)
      Group[4]++;
     else if(Arr[i]>=51 && Arr[i]<=60)
      Group[5]++;
     else if(Arr[i]>=61 && Arr[i]<=70)
      Group[6]++;
     else if(Arr[i]>=71 && Arr[i]<=80)
      Group[7]++;
     else if(Arr[i]>=81 && Arr[i]<=90)
      Group[8]++;
     else if(Arr[i]>=91 && Arr[i]<=100)
      Group[9]++;
   }
 printf("\nNumber Of Students In 0-10 Range Are...%d", Group[0]);
  for(i=1, j=11, k=20; i<10; i++, k+=10, j+=10)
   printf("\nNumber Of Students In %d-%d Range...%d", j, k, Group[i]);
 printf("\n");
}