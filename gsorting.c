#include<stdio.h>
#include<stdlib.h>
/*int main(){
//linear search
//lets take an array by ou self
int arr[10]={2,45,987,100,198,76,0,34,76,45};
int key;
printf("enter the key to be searched from the array");
scanf("%d",&key);
for(int i=0;i<10;i++){
    if(arr[i]==key){
    printf("key is found at %d\n",i);
}
}
}
*/

//binary search
/*int main(){
    int arr[10]={1,3,6,8,57,88,99,100,234,6789};
    //to find out the 1st position of '8' element
    int left=0;
    int right=9;
    int mid;
    int house_no=6789;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==house_no){
            printf("house_no is at %d",mid);
            return 0;
        }
        else if(arr[mid]<house_no){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
}
*/

//merge sort
/*void merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int array1[n1];
    int array2[n2];
    for(int i=0;i<n1;i++){
        array1[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        array2[j]=arr[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(array1[i]<=array2[j]){
            arr[k]=array1[i];
            i++;
        }
        else{
            arr[k]=array2[j];
            j++;
        }
        k++;

    }
    while(i<n1){
        arr[k]=array1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=array2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid;
        mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);


    }
}
int main(){
    //take a array
    int n,i;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("array after mergesort:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    printf("\n");
    }
    //to find min and max element 
    printf("minimum element is%d\n",arr[0]);
    printf("maximum element is%d",arr[n-1]);
}*/

//quick sort
void swap(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}
int partition(int arr[],int l,int r){
    int pivot=arr[l];
    int start=l;
    int end=r;
    while(start<end){
        while(arr[start]<=pivot){
            start=start+1;
        }
        while(arr[end]>pivot){
            end=end-1;
        }
        if(start<end){
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[l],&arr[end]);
    return end;
}

int quicksort(int arr[],int l,int r){
    if(l<r){
        int m=partition(arr,l,r);
        quicksort(arr,l,m-1);
        quicksort(arr,m+1,r);
    }
}
int main(){
    int n,i;
    printf("enter the lenght of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("array after quicksort:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    printf("\n");
    }
    //to find min and max element 
    printf("minimum element is%d\n",arr[0]);
    printf("maximum element is%d",arr[n-1]);
}