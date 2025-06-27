#include<stdio.h>
/*int main(){
    char str[10]="harshi";
    int i=0;
    while(str[i]!='\0'){
        i=i+1;
    }
    printf("size /len of string=%d",i);
}*/
//2
/*int main(){
    char str1[]="harshi";
    char str2[7];
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("%s",str2);
}*/
//3
/*int main(){
    char str1[20]="hello";
    char str2[8]="harshiii";
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    for(int j=0;j<8;j++){
        str1[i]=str2[j];
        i++;
    }
    printf("%s",str1);
}*/
//4
/*int main(){
    int size1,size2;
    printf("enter the size of strings=");
    scanf("%d%d",&size1,&size2);
    char str1[size1];
    char str2[size2];
    printf("enter the string 1=");
    scanf("%s",str1);
    printf("enter string2=");
    scanf("%s",str2);
    if(size1!=size2) printf("unequal strings");
    else if(size1==size2){
        for(int i=0;i<size1;i++){
            if(str1[i]!=str2[i]){printf("unequal");
            return 0;}
        }
        printf("Equal");
    }
}*/
//5
/*int main(){
    char str[]="harshi";
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]-32);
        i++;
    }
}*/
//6
/*int main(){
    char str[]="HARSHI";
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]+32);
        i++;
    }
}*/
//7
/*int main(){
    char str[]="Harshi";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>=97){
        printf("%c",str[i]-32);}
        else {printf("%c",str[i]+32);
        }
        i++;
    }
}*/
//8
/*int main(){
    char str[]="Harshi@16";
    int i=0,a=0,d=0,s=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z') a++;
        else if(str[i]>='0' && str[i]<='9') d++;
        else s++;
        i++;
    }
    printf("alphabets=%d\n",a);
    printf("digits=%d\n",d);
    printf("special characters=%d\n",s);
}*/
//9
/*#include<ctype.h>
int main(){
    char str[]="Harshi";
    int i=0,v=0,c=0;
    while(str[i]!='\0'){
        char ch=toupper(str[i]);
        if(ch=='A'||ch=='E'||ch=='I' ||ch=='O'||ch=='U') v++;
        else c++;
        i++;
    }
    printf("vowels=%d\n",v);
    printf("consonants=%d\n",c);
}*/
//10
/*int main(){
    char str[]="hello harshi hari";
    int i=0,w=1;
    while(str[i]!=0){
        if(str[i]==' '){
            w++;
        }
        i++;
    }
    printf("total noo of words=%d\n",w);
}*/
//11
/*int main(){
    char str[7]="harshi";
    char str1[7];
    int i,j=5;
    for(i=0;i<6;i++){
        str1[i]=str[j];
        j--;

    }
    str1[i]='\0';
    printf("%s",str1);

}*/
//12
/*#include<string.h>
int main(){
    char str[7]="isiisi";
    char str1[7];
    int i,j=5;
    for(i=0;i<6;i++){
        str1[i]=str[j];
        j--;

    }
    str1[i]='\0';
    if(strcmp(str,str1)==0) printf("palindrome");
    else printf("not palindrome");
}*/
//14
/*int main(){
    char str[11]="hello world";
    char key;
    printf("enetre the character=");
    scanf("%c",&key);
    for(int i=0;i<11;i++){
        if(str[i]==key){printf("first ocuurence=%d\n",i);
            return 0;
        }

    }
}*/
//13
/*int main(){
    char str[11]="hello world";
    for(int i=10;i>=0;i--){
        if(str[i]==' '||i==0){
            int k=i+1;
            for(int j=0;j<=10-i;j++){
                if(str[k]!=' '){
                printf("%c",str[k++]);
                }
            }
        }
    }
}*/
//15
/*int main(){
    char str[11]="hello world";
    char key;
    int j;
    printf("enetre the character=");
    scanf("%c",&key);
    for(int i=0;i<11;i++){
        if(str[i]==key){
            j=i;            
        }

    }printf("last ocuurence=%d\n",j);
}*/
//16
/*int main(){
    char str[11]="hello world";
    char key;
    int j;
    printf("enetre the character=");
    scanf("%c",&key);
    for(int i=0;i<11;i++){
        if(str[i]==key){           
        printf("last ocuurence=%d\n",i);
        }
    }
}*/
//17
/*int main(){
    char str[11]="hello world";
    char key;
    int j=0;
    printf("enetre the character=");
    scanf("%c",&key);
    for(int i=0;i<11;i++){
        if(str[i]==key){           
            j++;
        }
    }
    printf("ocurences=%d\n",j);
}*/
//18
/*int main(){
    char str[11]="hello world";
    char freq[11];
    int i;
    for(int i=0;i<11;i++){
        int c=0;
        for(int j=0;j<11;j++){
        if(str[i]==str[j]){           
            c++;
        }
        freq[i]=c;
    }
}
    int max=0;
    for(int i=0;i<11;i++){
        if(freq[i]>max){
            max=freq[i];
        }
        
    }
    for(int i=0;i<11;i++){
        if(freq[i]==max){
            printf("highest frequency=%c",str[i]);
            return 0;
        }
    }
}*/
//19
/*int main(){
    char str[11]="hello world";
    char freq[11];
    int i;
    for(int i=0;i<11;i++){
        int c=0;
        for(int j=0;j<11;j++){
        if(str[i]==str[j]){           
            c++;
        }
        freq[i]=c;
    }
}
    int min=str[0];
    for(int i=0;i<11;i++){
        if(freq[i]<min){
            min=freq[i];
        }
        
    }
    for(int i=0;i<11;i++){
        if(freq[i]==min){
            printf("lowest frequency=%c\n",str[i]);
        }
    }
}*/
//20
/*int main(){
    char str[11]="hello world";
    int freq[11];
    int i,visited=-1;
    for(int i=0;i<11;i++){
        int c=0;
        if(freq[i]!=visited){
        for(int j=0;j<11;j++){
        if(str[i]==str[j]){           
            c++;
            freq[j]=visited;
        }
        }
        freq[i]=c;
    }
}
for(int i=0;i<11;i++){
    if(freq[i]!=visited){
        printf("%c=%d\n",str[i],freq[i]);
    }
}
}*/
//21
/*int main(){
    char str[11]="hello world";
    char key;
    int j;
    printf("enetre the character=");
    scanf("%c",&key);
    for(int i=0;i<11;i++){
        if(str[i]==key){printf("first ocuurence=%d\n",i);
            for(int j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            printf("%s",str);
            return 0;
        }

    }
}*/
//22
/*int main(){
    char str[11]="hello world";
    char key;
    int j,i;
    printf("enetre the character=");
    scanf("%c",&key);
    for(int i=0;i<11;i++){
        if(str[i]==key){
            j=i;            
        }

    }
    for(int k=j;str[k]!='\0';k++){
                str[k]=str[k+1];
            }
            printf("%s",str);

}*/
//23
/*int main(){
    char str[11]="hello world";
    char key;
    int j;
    printf("enetre the character=");
    scanf("%c",&key);
    for(int i=0;i<11;i++){
        if(str[i]==key){printf("all ocuurence=%d\n",i);
            for(int j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }i--;
        }
        
    }printf("%s",str);
}*/
//24
/*int main(){
    char str[11]="helloworld";
    int j;
    char str1[11];
    int k=0;
    for(int i=0;i<11;i++){
        int c=0;
        for(int j=0;j<11;j++){
        if(str[i]==str[j])
            c++;
        }
         if(c==1){
            str1[k]=str[i];
            k++;
         }     
    }
    printf("%s",str1);
}*/
//25
/*int main(){
    char str[11]="hello world";
    char key,replace;
    int j;
    printf("enetre the character=");
    scanf("%c",&key);
    printf("eneter the another char=");
    scanf(" %c",&replace);
    for(int i=0;i<11;i++){
        if(str[i]==key){printf("first ocuurence=%d\n",i);
            str[i]=replace;
            printf("%s",str);
            return 0;
        }

    }
}*/
//26
/*int main(){
    char str[11]="hello world";
    char key,replace;
    int j;
    printf("enetre the character=");
    scanf("%c",&key);
    printf("eneter the another char=");
    scanf(" %c",&replace);
    for(int i=0;i<11;i++){
        if(str[i]==key) j=i;

    }
    str[j]=replace;
    printf("%s",str);
}*/
//27
/*int main(){
    char str[11]="hello world";
    char key,replace;
    int j;
    printf("enetre the character=");
    scanf("%c",&key);
    printf("eneter the another char to replace=");
    scanf(" %c",&replace);
    for(int i=0;i<11;i++){
        if(str[i]==key){
            str[i]=replace;
        }

    }
    printf("%s",str);
}*/
//28
#include<string.h>
/*int main(){
    char str[13]="is harshi am";
    char word[3]="am";
    int j;
    for(int i=0;i<12;i++){
            if(str[i]==word[0]){
                int k=i;
                for(j=0;j<2;j++){
                    if(str[k]!=word[j])
                        break;
                    k++;
                }
                if(j==strlen(word)&&(str[k]==' '||str[k]=='\0')){
                    printf("%d",i);
                    break;
                }

            }
        
    }
}*/
//29
/*int main(){
    char str[15]="is harshi am am";
    char word[3]="am";
    int j,last;
    for(int i=0;i<15;i++){
            if(str[i]==word[0]){
                int k=i;
                for(j=0;j<2;j++){
                    if(str[k]!=word[j])
                        break;
                    k++;
                }
                if(j==strlen(word)&&(str[k]==' '||str[k]=='\0')){
                    last=i;
                }

            }
        
    }printf("last ocurence=%d\n",last);
}*/
//30
/*int main(){
    char str[15]="is harshi am am";
    char word[3]="am";
    int j;
    for(int i=0;i<15;i++){
            if(str[i]==word[0]){
                int k=i;
                for(j=0;j<2;j++){
                    if(str[k]!=word[j])
                        break;
                    k++;
                }
                if(j==strlen(word)&&(str[k]==' '||str[k]=='\0')){
                    printf("all ocurences=%d\n",i);
                }

            }
        
    }
}*/
//31
/*int main(){
    char str[15]="is harshi am am";
    char word[3]="am";
    int j,count=0;
    for(int i=0;i<15;i++){
            if(str[i]==word[0]){
                int k=i;
                for(j=0;j<2;j++){
                    if(str[k]!=word[j])
                        break;
                    k++;
                }
                if(j==strlen(word)&&(str[k]==' '||str[k]=='\0')){
                    count++;
                }

            }
        
    }printf("count of all occurences=%d\n",count);
}*/
//32
/*int main(){
    char str[13]="is harshi am";
    char word[3]="am";
    int j;
    for(int i=0;i<12;i++){
            if(str[i]==word[0]){
                int k=i;
                for(j=0;j<2;j++){
                    if(str[k]!=word[j])
                        break;
                    k++;
                }
                if(j==strlen(word)&&(str[k]==' '||str[k]=='\0')){
                    for(int k=i;k<12;k++){
                        str[k]=str[k+strlen(word)];
                    }
                    printf("%s",str);
                    break;
                }

            }
        
    }
}*/
//33
/*int main(){
    char str[15]="is harshi am am";
    char word[3]="am";
    int j,last,i;
    for(i=0;i<15;i++){
            if(str[i]==word[0]){
                int k=i;
                for(j=0;j<2;j++){
                    if(str[k]!=word[j])
                        break;
                    k++;
                }
                if(j==strlen(word)&&(str[k]==' '||str[k]=='\0')){
                    last=i;
                }

            }
        
    }for(int k=last;k<15;k++){
                        str[k]=str[k+strlen(word)];
                    }printf("%s",str);
}*/
//34
/*int main(){
    char str[15]="is harshi am am";
    char word[3]="am";
    int j;
    for(int i=0;i<15;i++){
            if(str[i]==word[0]){
                int k=i;
                for(j=0;j<2;j++){
                    if(str[k]!=word[j])
                        break;
                    k++;
                }
                if(j==strlen(word)&&(str[k]==' '||str[k]=='\0')){
                    for(int k=i;k<15;k++){
                        str[k]=str[k+strlen(word)];
                    
                }

            }
            }
    }printf("%s",str);
}*/
//35
#include<ctype.h>
/*int main(){
    char str[10]="   hello";
    int i=0,j=0;
    while(str[i]!='\0'&&isspace(str[i])){
        i++;
    }
    while(str[i]!='\0'){
        str[j++]=str[i++];
    }str[j]='\0';
    printf("%s",str);
}*/
//36
/*int main(){
    char str[10]="hello   ";
    int end=strlen(str)-1;
    while(end>=0&&isspace(str[end])){
        end--;
    }
    str[end+1]='\0';
    printf("%s",str);
}*/
//37
/*int main(){
    char str[16]="   hello   ";
    int i=0,j=0,end=strlen(str)-1;
    while(str[i]!='\0'&&isspace(str[i])){
        i++;
    }
    while(end>=0&&isspace(str[end])){
        end--;
    }
    str[end+1]='\0';
    while(str[i]!='\0'){
        str[j++]=str[i++];
    }str[j]='\0';
    printf("%s",str);
}*/
//38
int main(){
    char str[16]="   he l lo   ";
    int i=0,j=0,end=strlen(str)-1;
    while(str[i]!='\0'&&isspace(str[i])){
        i++;
    }
    for(;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j++]=str[i];
        }
    }str[j]='\0';
    printf("%s",str);
}