#include <stdio.h>
int main()
   {
       int n=3,i,j;
       int mat[3][3]={1,2,3,4,5,6,7,8,9};
       int temp[3][3];
       for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
       temp[n-j-1][i]=mat[i][j];
       }
       
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
           mat[i][j]=temp[i][j];
       }
       }
       for(i=0;i<n;i++)
       {
        for(j=0;j<n;j++){
       printf("%d\t",mat[i][j]);
        }
        printf("\n");
       }
    return 0;
}
