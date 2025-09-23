#include <stdio.h>

int main()
{
    int n,arr[100],i,j,temp;
    printf("enter desised input::");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element %d-",i);
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++){
          if(arr[j]<arr[i]){
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
}   
   for(i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
   printf("\n\n");
}