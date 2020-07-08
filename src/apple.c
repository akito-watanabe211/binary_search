#include <stdio.h>

int n;
int k;
int A[100000];


int applebag(int a){
int b =0;

for(int i=0; i<n; i++){
//printf("%d" ,A[i]);
if(A[i]%a==0)
b += A[i]/a;
else
b +=A[i]/a +1;
}
return b <=k;
}
int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
 lb = 0;
 ub = 1e9;

while(ub - lb > 1){
int mid = (lb + ub) / 2;
  if(applebag(mid)) 
  	ub = mid;
  else 
  	lb = mid;
}

 printf("%d\n",ub);

 return 0;
}

