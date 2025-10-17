#include <stdio.h>
int main(){
    int i , j;
    char A[] = "python";
    for(j = 0 ; A[j] != '\0' ; j++){

    }
    j = j-1;
    for(i = 0 ; i < j ; i++ ; j--){
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;

    }
    printf("%s" , A);
}
