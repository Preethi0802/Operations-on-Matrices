#include<stdio.h>
#include<stdlib.h>
int main(){
    int mat[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int top=0,left=0,right=3,bottom=3;
    while(top<=bottom &&left<=right)
    {
        for(int i=left;i<=right;i++)
        printf("%d\t",mat[top][i]);
        top++;
        for(int i=top;i<=bottom;i++)
        printf("%d\t",mat[i][right]);
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--)
        printf("%d\t",mat[bottom][i]);
        bottom--;
        }
        if(left<=right){
        for( int i=bottom;i>=top;i--)
        printf("%d\t",mat[i][left]);
        left++;
    }
    }
 return 0;   
}
