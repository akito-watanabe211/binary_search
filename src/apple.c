#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
 lb = -1;
 ub = n-1;

while(ub - lb > 1){
int mid = (lb + ub) / 2;
  if(applebag(mid)) 
  	ub = mid;
  else 
  	lb = mid;
}

 printf("%d\n",A[ub]);

 return 0;
}

int applebag(int a){
int b =0;

for(int i=0; i<n; i++){
printf("%d" ,A[i]);
if(A[i]%A[a]==0)
b += A[i]/A[a];
else
b +=A[i]/A[a]+1;
}
return b <=k;
