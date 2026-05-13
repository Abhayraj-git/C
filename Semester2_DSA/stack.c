#include<stdio.h>
int top=-1;
void Push(int arr[],int n)
{
  if (top>=n-1)
  {
    printf("Overflow");
  }
  else 
  {
    top=top+1;
    printf("Enter the elemnt to Push:-");
    scanf("%d",&arr[top]);
  }
  return;
}
void Pop(int arr[], int n)
{
    if (top==-1)
    {
        printf("Underflow\n");
    }
    else 
    {
       printf("popped element is :-%d\n",arr[top]);
        top=top-1;
    }
    return;
}
void Peek(int arr[],int n)
{
if (top==-1)
{
   printf("Stack is empty\n");
}
else
{
    printf("%d",arr[top]);
}
return;
}
void Display(int arr[],int n)
{
 if (top==-1)
{
    printf("Element to peek are not possible");
}
else
{
for (int i=top;i>=0;i--)
{
    printf("%d\n",arr[i]);
}
}
return;
}
int main ()
{
    printf("Enter the value of n :-\n");
    printf("1) For Push.\n");
    printf("2) For Pop.\n");
    printf("3) For Peek.\n");
    printf("4) For Display.\n");
    printf("5) For Exit.\n");
    int z;
    scanf("%d",&z);
    int arr[z];
    while(1)
    {
    int n;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        Push(arr,z);
        break;
    case 2:
         Pop(arr,z);
         break;
    case 3:
         Peek(arr,z);
         break;
    case 4:
         Display(arr,z);
         break;
    case 5:
         return 0;
    default:
        printf("Ivalid input");
        break;
    }
}
    return 0;
}