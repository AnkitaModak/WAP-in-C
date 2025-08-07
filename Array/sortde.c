#include<stdio.h>

//this function helps in printing the array👇
void print_array(int arr[100],int n){
    printf("here is your beautiful array:\n");
    for(int i = 0;i<n ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//this function helps in taking the array inputs👇
void enter_array(int arr[100],int n){
    for(int i = 0;i<n ;i++){
        printf("enter the element of the array you wish to sort:");
        scanf("%d",&arr[i]);
    }
    print_array(arr,n);//prints the array as it is
}
//sorting in ascending order👇
void sortas(int arr[100],int n){
    int i,temp;
    enter_array(arr,n);
    printf("here is your sorted array:\n");
    for(i = 0; i>n-1;i++){
        if(arr[i]>arr[i+1]){
            //swap
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
            i = -1;//helps in resetting the loop 
        }
    }
    print_array(arr,n);//prints the sorted array
}
int main(){
    int n;
    printf("enter how many elements you want in your custom array:");
    scanf("%d",&n);
    int arr[n];
    sortas(arr,n);
    return 0;
}
