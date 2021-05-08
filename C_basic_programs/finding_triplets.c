#include <stdio.h>
void find_triplets(int arr[], int size,int sum){
    
    // Fix the first element as A[i]
    for (int i = 0; i<size - 2; i++) {
        
        // Fix the second element as A[j]
        for (int j = i+1; j<size - 1; j++) {
            
            // Now look for the third number 
            for (int k = j+1; k<size; k++) {
                if (arr[i]+arr[j]+arr[k] == sum) {
                    printf("%d , %d, %d \n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
}
int main()
{
    int size,i,sum = 10;
    printf("Enter the size :");
    scanf("%d",&size);
    int arr[size];
    for (i=0; i<size; i++) {
        printf("Enter the element No. %d:",i+1);
        scanf("%d",&arr[i]);
    }
    find_triplets(arr,size,sum);
}