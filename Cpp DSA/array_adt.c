#include <stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    for(i = 0; i < arr.length ; i++){
        printf("%d \n" , arr.A[i]);
    }
};
void Append(struct Array *arr , int x){
    if(arr->length < arr->size){
    arr->A[arr->length] = x;
    arr->length++;
    }
    };
void Insert(struct Array *arr , int index , int x){
    int i;
    for(i=arr->length ; i > index ; i--)
        arr->A[i] = arr->A[i-1];
    arr->A[index] = x;
    arr->length++;
}
void Delete(struct Array *arr , int index){
    int i;
    for(i = index ; i < arr->length ; i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;
}
int main(){
    struct Array arr;
    int i , n;
    printf("Enter the size of the array : ");
    scanf("%d" , &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;
    printf("Enter no. of elements: ");
    scanf("%d" , &n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &arr.A[i]);
    }
    arr.length = n;
    Delete(&arr , 2);
    Display(arr);
}