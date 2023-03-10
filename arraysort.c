#include <stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n];
<<<<<<< HEAD
    printf("this program sorts the array");
=======
    printf("this s the array sorting program");
>>>>>>> 8dcfcf0 (changes from d)
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else
                continue;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

