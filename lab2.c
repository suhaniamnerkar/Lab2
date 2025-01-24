#include<stdio.h>
void frequency(int arr1[], int m){
    int arrcpy[100];
    for(int c=0;c<m;c++){
        arrcpy[c]=arr1[c];
    }
    for(int a=0;a<m;a++){
        int count=1;
        if(arrcpy[a]!=-1){
        for(int b=a+1;b<m;b++){
            if(arrcpy[a]==arrcpy[b]){
                count++;
                arrcpy[b]=-1;
            }
        }
        printf("%d is %d\n",arrcpy[a],count);
        }
    }
}

void bubblesort(int arr2[],int a){
    int temp;
    int count1=0;
     for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr2[j]>arr2[j+1]){
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
                count1++;
            }
        }
    }
    printf("The sorted array is (bubblesort): ");
    for(int k=0;k<a-1;k++){
        printf("%d, ",arr2[k]);
    }
    printf("%d.",arr2[a-1]);
    printf("The number of swaps were %d\n",count1);
}

void insertionsort(int arr3[], int b){
    int count2=0;
    for(int i=1;i<b;i++){
        int temp=arr3[i];
        int j=i-1;
        while(j>=0 && arr3[j]>temp){
            arr3[j+1]=arr3[j];
            arr3[j]=temp;
            j--;
        }
        count2++;
    }
    printf("The sorted elements (insertion sort) are: ");
    for(int k=0;k<b;k++){
        printf("%d, ",arr3[k]);
    }
    printf("The insertion is happening %d times",count2);
}

int main(){
    int n,sum=0,sum1=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The moving average is: ");
    for(int j=0;j<n-3;j++){
      for(int k=0;k<3;k++){
        sum=sum+arr[j+k];
      }
      int avg=sum/3;
      printf("%d, ",avg);
       }

    //frequency
    printf("The frequency of element:\n ");
    frequency(arr,n);
    
    //bubblesort swaps
    bubblesort(arr,n);

    //insertion sort
    insertionsort(arr,n);
    
    return 0;
    }
    


