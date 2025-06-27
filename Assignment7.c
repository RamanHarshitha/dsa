#include<stdio.h>
/*void arrayInput(int arr[],int size,int index){
    if(size==index) return;
    scanf("%d",&arr[index]);
    arrayInput(arr,size,index+1);
}
void arrayCall(int arr[],int size,int index){
    if(size==index) return;
    printf("%d ",arr[index]);
    arrayCall(arr,size,index+1);
}
int main(){
    int arr[20];
    int size;
    printf("enter the size");
    scanf("%d",&size);
    printf("input elements:");
    arrayInput(arr,size,0);
    arrayCall(arr,size,0);
}*/
//2
/*int sum=0;
int SumArray(int arr[],int size,int index){
    if(size==index) return 0;
    sum=sum+arr[index];
    SumArray(arr,size,index+1);
    return sum;

}
int main(){
    int arr[6]={1,7,5,10,13,78};
    SumArray(arr,6,0);
    printf("%d",sum);
}*/
//3
/*int MaxMin(int arr[],int *max,int *min,int size,int index){
    if(size==index) return 0;
    if(*max<arr[index]){
        *max=arr[index];
    }
    if(*min>arr[index]){
        *min=arr[index];
    }
    MaxMin(arr,max,min,size,index+1);
}
int main(){
    int arr[5]={1,56,34,89,100};
    int min=arr[0],max=arr[0];
    MaxMin(arr,&max,&min,5,0);
    printf("%d %d",max,min);
}*/
//4
/*int main(){
    int arr[8]={10,20,45,67,89,56,67,71};
    int first=arr[0],second=arr[0];
    for(int i=0;i<8;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second&& arr[i]<first){
            second=arr[i];
        }
    }
    printf("%d",second);
}*/
//5
/*int main(){
    int arr[8]={10,45,68,23,64,78,3,56};
    int arr2[8];
    for(int i=0;i<8;i++){
        arr2[i]=arr[i];
    }
    printf("copied array=");
    for(int i=0;i<8;i++){
        printf("%d  ",arr2[i]);
    }
}*/
//6
/*int main(){
    int arr[10]={1,2,3,5,6,7,8,9};
    int pos,val;
    printf("enter the position");
    scanf("%d",&pos);
    printf("enter the value to be inserted=");
    scanf("%d",&val);
    for(int i=8;i>pos;i--){
        arr[i]=arr[i-1];

    }
    arr[pos]=val;
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
}*/
//7
/*int main(){
    int arr[10]={1,2,3,5,6,7,8,9};
    int pos,val;
    printf("enter the position");
    scanf("%d",&pos);
    for(int i=pos;i<=8;i++){
        arr[i]=arr[i+1];

    }
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
}*/
//8
/*int main(){
    int c=0;
    int arr[10]={11,1,3,11,2,5,5,7,8,8};
    for(int i=0;i<10;i++){
        int c=0;
        for(int j=0;j<10;j++){
            if(arr[i]==arr[j]){
                c=c+1;
            }
            
        }
        if(c!=2) printf("%d ",arr[i]);
    }
}*/
//9
/*int main(){
    int arr[10]={11,1,3,-11,2,5,-5,7,-8,8};
    for(int i=0;i<10;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
}*/
//10
/*int main(){
    int arr[10]={11,4,3,78,234,6,56,49,2,84};
    int even=0,odd=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }
        else odd++;
    }
    printf("even=%d\n",even);
    printf("odd=%d\n",odd);
}*/
//11
/*int main(){
    int neg=0;
    int arr[10]={11,1,3,-11,2,5,-5,7,-8,8};
    for(int i=0;i<10;i++){
        if(arr[i]<0){
            neg++;
            
        }
    }
    printf("total negatives=%d\n",neg);
}*/
//12
/*int main(){
    int c=0,dup=0;
    int arr[11]={11,1,3,11,2,5,5,7,8,8,1};
    for(int i=0;i<11;i++){
        int c=0;
        for(int j=0;j<11;j++){
            if(arr[i]==arr[j]){
                c=c+1;
            }
            
        }
        if(c==2) dup++;
    }
    printf("Duplicates=%d",dup/2);
}*/
//13
/*int main(){
    int arr[10]={1,6,3,77,11,8,6,3,1,1};
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}*/
//14
/*int main(){
    int arr[10]={1,6,3,77,11,8,6,3,1,1};
    int n=10,freq[10],j,count;
    for(int i=0;i<n;i++){
        count=1;
        if(freq[i]==-1){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=-1;


            }
        }   
        freq[i]=count;
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=-1)
            printf("%d \t %d\n ",arr[i],freq[i]); 
}
}*/
//15
/*int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int arr3[10];
    
    for(int i=0;i<5;i++){
         arr3[i]=arr1[i];
    }
    for(int i=0;i<5;i++){
        arr3[5+i]=arr2[i];
    }
    printf("elemtnts in merged array=");
    for(int i=0;i<10;i++){
        printf("%d ",arr3[i]);
    }
}*/
//16
/*int main(){
    int arr[10]={2,7,35,855,2,1,89,55,37,53};
    int n=10;
    printf("reverse of array=");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}*/
//17
/*int main(){
    int arr[10]={2,7,35,855,2,1,89,55,37,53};
    int even[10];
    int odd[10];
    int k=0,r=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even[k++]=arr[i];
        }
        else{
            odd[r++]=arr[i];
        }

    }
    printf("even array=");
    for(int i=0;i<k;i++){
        printf("%d ",even[i]);
    }
    printf("odd array=");
    for(int i=0;i<r;i++){
        printf("%d ",odd[i]);
    }
}*/
//18
/*int main(){
    int arr[10]={1,67,3,71,25,8,35,89,1011};
    int key;
    printf("enter the elment to be searched=");
    scanf("%d",&key);
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            printf("%d is found at %d",key,i);
            break;
        }
    }

}*/
//19
/*int FindMax(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int maxIndex=0;
        for(int j=1;j<=i;j++){
        if(arr[j]>arr[maxIndex]){
            maxIndex=j;
        }
    }
    int temp=arr[maxIndex];
    arr[maxIndex]=arr[i];
    arr[i]=temp;
    }
}
int main(){
    int arr[10]={1,67,3,71,25,8,35,89,1011,78};
    int n=10;
    FindMax(arr,n);
    printf("sorted array=");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}*/
//20
/*int FindMin(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int minIndex=0;
        for(int j=1;j<=i;j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    int temp=arr[minIndex];
    arr[minIndex]=arr[i];
    arr[i]=temp;
    }
}
int main(){
    int arr[10]={1,67,3,71,25,8,35,89,1011,78};
    int n=10;
    FindMin(arr,n);
    printf("sorted array=");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}*/
//21
/*void sortEvenOdd(int arr[],int n){
    int even[n],odd[n];
    int e=0,o=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[e++]=arr[i];
        }
        else odd[o++]=arr[i];
    }
    for(int i=0;i<e-1;i++){
        for(int j=i+1;j<e;j++){
            if(even[i]>even[j]){
                int temp=even[i];
                even[i]=even[j];
                even[j]=temp;
            }
        }
    }
    for(int i=0;i<o-1;i++){
        for(int j=i+1;j<o;j++){
            if(odd[i]>odd[j]){
                int temp=odd[i];
                odd[i]=odd[j];
                odd[j]=temp;
            }
        }

    }
    e=0,o=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) arr[i]=even[e++];
        else arr[i]=odd[o++];
    }

}
int main(){
    int arr[6]={5,3,1,8,6,7};
    int n=6;
    sortEvenOdd(arr,n);
    printf("array after sorting=");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}*/
//22
/*int main(){
    int arr1[2][3]={{1,2,3},
                {4,5,6}};
    int arr2[2][3]={{1,2,3},{4,5,6}};
    int arr3[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];

        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr3[i][j]);

        }
    }
}*/
//23
/*int main(){
    int arr1[2][3]={{1,2,3},
                {4,5,6}};
    int arr2[2][3]={{1,2,3},{4,5,6}};
    int arr3[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]-arr2[i][j];

        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr3[i][j]);

        }
    }
}*/
//24:scalar multiplication
/*int main(){
    int is,js,scalar;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("enter scalar value=");
    scanf("%d",&scalar);
    printf("scalar matrix=");
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        printf("%d ",arr[i][j]*scalar);
        }
    }
}*/
//25
/*int main(){
    int is,js;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int is2,js2;
    printf("enter the size of array=");
    scanf("%d%d",&is2,&js2);
    printf("enter the array elements");
    int arr2[is2][js2];
    for(int i=0;i<is2;i++){
        for(int j=0;j<js2;j++){
        scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[is][js2];
    for(int i=0;i<is;i++){
        for(int j=0;j<js2;j++){
            arr3[i][j]=0;
        }
    }
    if(js==is2){
        for(int i=0;i<is;i++){
            for(int j=0;j<js2;j++){
                for(int k=0;k<is2;k++){
                arr3[i][j]+=arr[i][k]*arr2[k][j];
                }
            }
        }
        
    }
    printf(" matrix multiplication=");
    for(int i=0;i<is;i++){
        for(int j=0;j<js2;j++){
        printf("%d ",arr3[i][j]);
        }
    }
}*/
//26
/*int main(){
    int is,js;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int is2,js2;
    printf("enter the size of array=");
    scanf("%d%d",&is2,&js2);
    printf("enter the array elements");
    int arr2[is2][js2];
    for(int i=0;i<is2;i++){
        for(int j=0;j<js2;j++){
        scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
            if(arr[i][j]!=arr2[i][j]) {printf("not equal");
                return 0;

        }
    }
}printf("equal");
}*/
//27
/*int main(){
    int is,js;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<is;i++){
        printf("%d ",arr[i][i]);
    }
}*/
//28
/*int main(){
    int is,js;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<is;i++){
        printf("%d ",arr[i][is-1-i]);
    }
}*/
//29
/*int main(){
    int is,js,sum;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("row sum=\n");
    for(int i=0;i<is;i++){
        sum=0;
        for(int j=0;j<js;j++){
            sum+=arr[i][j];
        }
        printf("sum of %d row=%d",i,sum);
    }
    printf("\ncolumn sum=\n");
    for(int i=0;i<is;i++){
        sum=0;
        for(int j=0;j<js;j++){
            sum+=arr[j][i];
        }
        printf("sum of %d col=%d",i,sum);
    }
}*/
//30
/*int main(){
    int is,js,sum;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int arr1[is];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
            if(i==j){
                arr1[i]=arr[i][j];
            }
        }
    }
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
            if(i==j)
            arr[i][j]=arr[i][js-1-i];
        }
    }
    for(int i=0;i<is;i++){
            arr[i][js-1-i]=arr1[i];
        
    }

    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        printf("%d ",arr[i][j]);
        }
    }
}*/
//31
/*int main(){
    int is,js;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("upper triangular matrix=");
    for(int i=1;i<is;i++){
        for(int j=0;j<i;j++){
            printf("%d ",arr[i][j]);
        }
    }
}*/
//32
/*int main(){
    int is,js;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("lower triangular matrix=");
    for(int i=0;i<is-1;i++){
        for(int j=1+i;j<=is-1;j++){
            printf("%d ",arr[i][j]);
        }
    }
}*/
//33
/*int main(){
    int is,js,sum=0;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("sum of upper triangular matrix=");
    for(int i=1;i<is;i++){
        for(int j=0;j<i;j++){
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
}*/
//34
/*int main(){
    int is,js,sum=0;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int arr1[js][is];
    for(int i=0;i<js;i++){
        for(int j=0;j<is;j++){
            arr1[i][j]=arr[j][i];
        }
    }
    printf("transpose=");
    for(int i=0;i<js;i++){
        for(int j=0;j<is;j++){
            printf("%d ",arr1[i][j]);
        }
    }
}*/
//36
/*int main(){
    int is,js,identity=1;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<is && identity;i++){
        for(int j=0;j<js;j++){
            if(i==j &&arr[i][j]!=1){
                identity=0;
                break;
            }
            else if(i!=j &&arr[i][j]!=0){
                identity=0;
                break;
            }
        }
    }
    if(identity) printf("identity matrix");
}*/
//37
/*int main(){
    int is,js,identity=1;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
            if(arr[i][i]==0){
                count++;
            }
        }
    }
    int nonzero=(is*js)-count;
    if(count>nonzero){
        printf("sparse matrix");
    }
    else printf("non sparse");
}*/
//38
/*int main(){
    int is,js,sum=0;
    printf("enter the size of array=");
    scanf("%d%d",&is,&js);
    printf("enter the array elements");
    int arr[is][js];
    for(int i=0;i<is;i++){
        for(int j=0;j<js;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int arr1[js][is];
    for(int i=0;i<js;i++){
        for(int j=0;j<is;j++){
            arr1[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<js;i++){
        for(int j=0;j<is;j++){
            if(arr[i][j]!=arr1[i][j]){
                printf("not symetric");
                return 0;
            }
        }
    }
    printf("symmetric");
}*/