int main()
{
    int n,arr[100],a,b,i;
    printf("enter desised input::");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element %d-",i);
        scanf("%d",&arr[i]);
    }
    printf("input value to be inserted::");
    scanf("%d",&a);
    printf("position at which to be inserted::");
    scanf("%d",&b);
    printf("current list of arrays\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=n;i>=b;i--){
        arr[i]=arr[i-1];
    }
    arr[b-1]=a;
    printf("\n\nnew array\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}