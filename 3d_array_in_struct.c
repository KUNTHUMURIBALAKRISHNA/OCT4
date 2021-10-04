#include<stdio.h>
struct data
{
    int arr[4][3][2];
};
int main()
{
    struct data n;
    int i,j,k;
    printf("enter array elements:\n");
    for(i=0;i<4;i++)
    {
     for(j=0;j<3;j++)
     {
      for(k=0;k<2;k++)
      {
          scanf("%d",&n.arr[i][j][k]);
      }
    }
}
    printf(" array elements are:\n");
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=3;j++)
       {
         for(k=1;k<=2;k++)
         {
          printf("%d ",n.arr[i][j][k]);
          }
        }
    }
return 0;
}

