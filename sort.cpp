#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void hoanvi (int &a,int& b);
void bublesort (int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for (int j = n-1; j>i; j--)
        {
           if (a[j]<a[j-1]) hoanvi(a[j],a[j-1]);
        }
}
void interchangesort  (int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for (int j = i+1; j<n; j++)
        {
           if (a[i]>a[j]) hoanvi(a[j],a[i]);
        }
}

void selectionsort  (int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for (int j = i+1; j<n; j++)
        {
           if (a[i]>a[j]) hoanvi(a[j],a[i]);
        }
}
void inserttionsort (int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j=i-1,x=a[i];
        for (; j >= 0 && a[j]>x; j--)
        {
            a[j+2]=a[j+1];
        }
        a[j+1]=x;
    }
}
void quicksort(int a[], int left, int right)
{   
    int x=a[(left+right)/2];
    int i=left,j=right;
    for(;i<j;)
    {
    for (;i < right; i++);
    for(;j > left;j--);
    hoanvi(a[i],a[j]);
    }
    if(left<j) quicksort(a,left,i);
    if(right>i) quicksort(a,j,right);
}
int TimMin (int a[], int x,int y)
{
    int min=0;
    for (; x < y; x++)
    {
        if(a[min]<a[x]) a[min]=a[x];
    }
}
void hoanvi (int &a,int& b)
{
    int tam;
    tam=a;
    a = b;
    b= tam;
}
void inmang (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d  ",i,a[i]);
    }
}
void randArray (int a[], int n)
{
	for (int i = 0; i < n; i++)
    {
        a[i]=rand()%50;
    }
}

int main()
{
	
    int n;
    scanf("%d",&n);
    int a[n]; 
    srand(time(NULL));
    //buble sort
    randArray(a,n);
    inmang(a,n);
    printf("\nbuble sort : \n");
    bublesort(a,n);
    inmang(a,n);
    //intercharge sort
    printf("\nintercharge sort : \n");
    interchangesort(a,n);
    inmang(a,n);
    //section sort
     printf("\nsection sort : \n");
    selectionsort(a,n);
    inmang(a,n);
    //insertion sort
     printf("\ninsertion sort : \n");
    inserttionsort(a,n);
    inmang(a,n);
    //quick sort
     printf("\nquick sort : \n");
    quicksort(a,0,n-1);
    inmang(a,n);
    
    return 0;
}
