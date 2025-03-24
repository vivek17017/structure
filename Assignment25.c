#include<stdio.h>
#include<string.h>
void swap(int*,int*);
int main1()
{
    int a,b;
    printf("Enter value of a \n");
    scanf("%d",&a);
    printf("Enter value of b \n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a %d\nvalue of b %d",a,b);

}
void swap(int *p ,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
}
void search_all_occurances(char *str,char ch,int *arr);
int main2()
{
    char str[]="i am going to rule the world";
    char ch='o';
    int arr[20];
    search_all_occurances(str,ch,arr);
    for(int i=0;arr[i];i++)
    printf("%d ",arr[i]);
}
void search_all_occurances(char *str,char ch,int *arr)
{
    int j=0;
    for(int i=0;*(str+i);i++)
    {
        if(*(str+i)==ch)
        {
            *(arr+j)=i;
            j++;
        }
    }
    *(arr+j)='\0';
}

void uppercase(char*);
void lowercase(char*);
int main4()
{
    char str[]="VGHJKjsdoifua";
    lowercase(str);
    printf("\n%s",str);

}
void uppercase(char *str)
{
    for(int i=0;*(str+i);i++)
    {
        if(*(str+i)>='a' && *(str+i)<='z')
        {
            *(str+i)-=32;
        }
    }
}
void lowercase(char *str)
{
    for(int i=0;*(str+i);i++)
    {
        if(*(str+i)>='A' && *(str+i)<='Z')
        {
            *(str+i)+=32;

        }
    }
}

void extract_string(char *,int ,int,char *);
int main5()
{
    char str[]="i will take a job of software engineering as soon as possible";
    int start_index=5;
    int end_index=15;
    char result[50];
    extract_string(str,start_index,end_index,result);
    for(int i=0;result[i];i++)
    printf("%c",result[i]);

}

void extract_string(char *str,int start_index,int end_index,char *result)
{
    int j=0;
    for(int i=start_index;i<end_index;i++)
    {
        *(result+j)=*(str+i);
        j++;
    }
    *(result+j)='\0';
}



void swap_string(char*,char*);
int main6()
{
    char a[]="rahul";
    char b[]="khabib";
    swap_string(a,b);
    printf("\n\n");
    printf("%s\n",a);
    printf("%s",b);


}
void swap_string(char *p ,char *q)
{
    char temp[20];
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
    
}
void sort(int*,int);
int main7()
{
    int arr[]={5,3,6,3,6,0,34};
    sort(arr,7);
    for(int i=0;i<7;i++)
    printf("%d ",arr[i]);
}
void sort(int*ptr,int size)
{
    for(int r=1;r<size;r++)
    {
        for(int i=0;i<size-r-1;i++)
        {
            if(*(ptr+i)>*(ptr+i+1))
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+i+1);
                *(ptr+i+1)=temp;

            }
        }
    }
}

void merge(int *,int ,int *,int ,int *);
int main()
{
    int arr1[8]={1,2,3,4,5,6,7,8};
    int arr2[10]={9,10,11,12,13,14,15,16,17,18};
    int arr3[18];
    merge(arr1,8,arr2,10,arr3);
    for(int i=0;i<18;i++)
    {
        printf("%d ",arr3[i]);
    }

}

void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    for(int i=0;i<size1;i++)
    {
        arr3[i]=arr1[i];

    }
    for(int i=size1,k=0;i<size1+size2;i++,k++)
    {
        *(arr3+i)=*(arr2+k);
    }

}