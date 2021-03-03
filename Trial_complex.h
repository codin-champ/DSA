#ifndef __COMPLEX__H
#define __COMPLEX__H

typedef int* Trial_complex

Trial_complex CreateComplex(int n);

Trial_complex add_complex(int n, const Trial_complex c1, const Trial_complex c2);
Trial_complex sub_complex(int n, const Trial_complex c1, const Trial_complex c2);
double dot_complex(int n,const Trial_complex c1, const Trial_complex c2);
double mod_complex(int n,const Trial_complex c1);

#endif