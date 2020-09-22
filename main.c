#include <stdio.h>
#include <stdlib.h>



int select(int v[],int i){
int j , k=i;
for(j=i+1;j<1000;j++){
    if(v[k]>v[j]){
        k=j;
    }
}
return k;
}


int main()
{





 int k,i,x,v[1000];

 //preenchimento ↓↓
  for(i=0;i<1000;i++){
    v[i] = rand()%10000;
  //printf("%d ",v[i]);
}
/* //←←← APAGAR PARA RODAR TROCA
//troca [RODOU EM 0,339S]
int j;
for(j=1;j<1000;j++){
for(i=0;i<1000-j;i++){
    if(v[i]>v[i+1]){
        x=v[i+1];
        v[i+1]=v[i];
        v[i]=x;
    }
}
}
/*
printf("\n\n\n\n\n\n");
  for(i=0;i<1000;i++){
  printf("%d ",v[i]);
  }
 */

 //seleção [rodou em 0,05s]

for(i=0;i<999;i++){

    k=select(v,i);
x=v[i];
v[i]=v[k];
v[k]=x;
  //printf("%d ",v[i]);


}








    return 0;
}
