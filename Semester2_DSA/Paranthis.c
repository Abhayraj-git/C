#include<stdio.h>
int main ()
{
    char arr[100];
    char stack[100];
    int top=-1;
    printf("Enter the value of Experssion :-");
    scanf("%s",arr);
    for (int i=0;arr[i]!='\0';i++)
    {
        if (arr[i]=='{' || arr[i]=='[' || arr[i]=='(')
        {
            top=top+1;
            stack[top]=arr[i];
        }
        else if (arr[i]=='}' || arr[i]==']' || arr[i]==')')
        {
            if (top==-1)
            {
                printf("No There is Not Balanced Paranthesis");
                return 0;
            }
            else 
            {
                if ((arr[i]=='}' && stack[top]=='{') || (arr[i]==']' && stack[top]=='[') || (arr[i]==')' && stack[top]=='('))
                {
                    top=top-1;
                }
                else 
                {
                     printf("No There is Not Balanced Paranthesis");
                     return 0;
                }
            }
        }
    }
      if (top == -1)
        printf("The given expression has balanced parentheses\n");
    else
        printf("The given expression does NOT have balanced parentheses\n");

    return 0;
}