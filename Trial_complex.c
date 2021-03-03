#include "Trial_complex.h"
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

Trial_complex CreateComplex(int n)
{
    int ComplexNumber[n];
    Trial_complex complex;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ComplexNumber[i]);
    }
    complex=&ComplexNumber[0];
    return complex;
}

Trial_complex add_complex(int n,const Trial_complex c1, const Trial_complex c2)
{
    int Addition[n];
    Trial_complex Add;

    for(int i=0; i<n; i++)
    {
        Addition[i]=c1[i] + c2[i];
    }

    Add=&Addition[0];
    return Add;
}

Trial_complex sub_complex(int n, const Trial_complex c1, const Trial_complex c2)
{
    int subtraction[n];
    Trial_complex Sub;

    for(int i=0; i<n; i++)
    {
        subtraction[i]=c1[i] - c2[i];
    }
    Sub=&subtraction[0];
    return Sub;
}

double dot_complex(int n, const Trial_complex c1, const Trial_complex c2)
{
    double dot_product=0;

    for(int i=0; i<n; i++)
    {
        dot_product=dot_product+c1[i]*c2[i];
    }
    return dot_product;
}

double mod_complex(int n, const Trial_complex c1)
{
    double mod_square=0;
    for(int i=0; i<n; i++)
    {
        mod_square=mod_square + c1[i]*c1[i];
    }
    double mod=sqrt(mod_square);

    return mod;
}