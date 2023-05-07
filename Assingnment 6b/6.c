#include<stdio.h>
void main()
{

  int n=3,m=3;

//   // Taking data from user
//   printf("Enter no of rows and columns\n");
//   scanf("%d%d",&m,&n);
//   for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++)
//     {
//         //printf("%d",j*i);
//        scanf("%d",&arr[i][j])
//     }
//     printf("\n");
//   }
int arr[3][3]={{4,5,4},{54,6,7},{3,6,9}};
int arr2[3][3]={{3,6,9},{9,3,5},{65,98,99}};
int arr3[3][3];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        arr3[i][j]=arr[i][j]+arr2[i][j];
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr3[i][j]);
    }
    printf("\n");
}


  
    
   
  
}