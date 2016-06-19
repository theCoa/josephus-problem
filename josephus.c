#include <stdio.h>

int josephus(int n, int k) {
  int i, temp=0;
  for(i=1;i<=n;i++){
    temp=(temp+k)%i;
  }
  return temp+1;
}

int main()
{
  int n,k;
  printf("How many people are in circle:");
  scanf("%d",&n);
  printf("How many people to skip");
  scanf("%d",&k);
  printf("Winner is:%d", josephus(n,k));

  return 0;
}
