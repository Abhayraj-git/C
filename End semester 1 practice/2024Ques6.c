#include<stdio.h>
enum subject {AI,ML,NS,DIP,SC};
int main ()
{
    printf("Choose A subject : - \n");
    printf("0-> Artificial Intelligence\n");
    printf("1-> Machine Learning \n");
    printf("2-> Network Security\n");
    printf("3-> Digital Image Processing\n");
    printf("4-> Soft Computing");
    int arr[4];
    int sum =0;
    printf("Enter the value in array corresponding to which suject you want :- \n");
    for (int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<4;i++)
    {
        for (int j=i+1;j<4;j++)
        {
            if (arr[i]==arr[j])
            {
              printf("Invalid Entry");
              return 0;
            }
        }
    }
    printf("You selected:\n");
    for (int i = 0; i < 4; i++) {
        switch(arr[i]) {
            case AI:  printf("Artificial Intelligence\n"); break;
            case ML:  printf("Machine Learning\n"); break;
            case NS:  printf("Network Security\n"); break;
            case DIP: printf("Digital Image Processing\n"); break;
            case SC:  printf("Soft Computing\n"); break;
            default:  printf("Invalid subject code\n"); return 0;
        }
    }
    for (int i=0;i<4;i++)
    {
     sum+=arr[i];
    }
    if (sum%2==0)
    {
        printf("Seat is Available ");
    }
    else
    {
        printf("Seat is Not Available ");
    }
    return 0;
}