// pointer basic concept
#include<stdio.h>
int main() {
    int  u = 3;
    int v;
    // int *pu;
    // int *pv;
    int *pu = &u;
    v = *pu;
    int *pv = &v;
    printf("\n u = %d &u = %x pu = %x *pu = %d", u,&u,pu,*pu);    
    printf("\n v = %d &v = %x pv = %x *pv = %d", v,&v,pv,*pv);    
}