#include "Trial_complex.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char fun[4];
    scanf("%s",fun);

    int n;
    scanf("%d",&n);

    if(strcmp(fun,"DOT")==0)
    {
        Trial_complex c1;
        Trial_complex c2;

        c1=Create_Complex(n);
        c2=Create_Complex(n);

        double c3=dot_complex(n,c1,c2);

        printf("%.0f",c3);

    return 0;
    }

    else if(strcmp(fun,"ADD")==0)
    {
        Trial_complex c1;
        Trial_complex c2;

        c1=Create_Complex(n);
        c2=Create_Complex(n);


        Trial_complex c3=add_complex(n,c1,c2);

    for(int i=0; i<n; i++)
        {
            printf("%d ",c3[i]);
        }
        return 0;
    }


    else if(strcmp(fun,"SUB")==0)
    {
        Trial_complex c1;
        Trial_complex c2;

        c1=Create_Complex(n);
        c2=Create_Complex(n);


        Trial_complex c3=sub_complex(n,c1,c2);
        for(int i=0; i<n; i++)
        {
            printf("%d ",c3[i]);
        }
    }

    else
    {
        Trial_complex c1;
        c1=Create_Complex(n);
        double modulus= mod_complex(c1);
        printf("%0.2f",modulus);
        return 0;
    }
    return 0;

}