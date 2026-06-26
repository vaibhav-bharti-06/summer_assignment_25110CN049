#include<stdio.h>
int main()
{
    int i,j,a,b,k;
    printf("Enter number of elements of both the arrays:");
    scanf("%d %d",&i,&j);
    int arr1[1000],arr2[1000],arr[2000];
    printf("Enter the sorted elements of array1:");
    for(a=0;a<i;a++){
        scanf("%d",&arr1[a]);
    }
    printf("Enter the sorted elements of array2:");
    for(b=0;b<j;b++){
        scanf("%d",&arr2[b]);
    }
    a=0;b=0;k=0;
    while(a<i&&b<j){
        if(arr1[a]<arr2[b]){
            arr[k++]=arr1[a++];
        }
        else if(arr2[b]<arr1[a]){
            arr[k++]=arr2[b++];
        }
        else{
            arr[k++]=arr1[a++];
            b++;
        }
    }
    while(a<i){
        arr[k++]=arr1[a++];
    }      
    while(b<j){
        arr[k++]=arr2[b++];
    }
    //printing output statements
    printf("Merged array:\n");
    for(int c=0;c<k;c++){
        printf("%d\t",arr[c]);
    }
    return 0;
}