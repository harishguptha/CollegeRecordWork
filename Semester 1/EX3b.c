# include <stdio.h>
int main()
{
 int i, k, Days, Start_Day;
 printf("\nEnter The Number Of Days In The Month...");
 scanf("%d", &Days);
 printf("Enter The Starting Day Of The Month (Sun=1 Sat=7)....");
 scanf("%d", &Start_Day);
 printf("\n  S  M  T  W  T  F  S\n");
 for(k=0;k<Start_Day-1;k++)
 printf("   ");
  for(i=1;i<=Days;i++)
   {
    printf("%3d", i);
     if(++k>6)
      {
       k=0;
       printf("\n");
      }
   }
 printf("\n");
return 0;
}
