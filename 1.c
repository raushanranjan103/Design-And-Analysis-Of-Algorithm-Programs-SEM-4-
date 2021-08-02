#include<stdio.h>
#include<stdlib.h>
void main()
{int n;
int temp;
int i;
int a[10];
printf("enter the no of elements u wamt to insert \n ");
scanf("%d",&n);
printf("enter the values in the array \n ");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}


printf("array before sorting will be \n  ");

for(i=0;i<n;i++)
{printf("%d",a[i]);}


printf("the array after sorting will be \n ");
for(i=0;i<n-1;i++)
{  for(int j=0;j<n-i-1;j++)
    {     if(a[j+1]<a[j])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}

}
}

for(i=0;i<n;i++)
{printf("%d",a[i]);
}
}