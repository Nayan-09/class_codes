#include <stdio.h>
void main(){
    int arr[5]={3,1,9,2,4};
    for (int j=1;j<=5;j++){
        for (int i =0; i<=4;i++ ){
            if (arr[i]>arr[i+1]){
                int sw = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=sw;
            }
        }
        
    }
for (int i =0 ; i<=4; i++){
    printf("%d ",arr[i]);
}
}