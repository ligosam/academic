#include <bits/stdc++.h>

using namespace std;

bool fnc(int n){
  int temp = n;
  int rev = 0;
  for(; temp > 0; temp /= 10){
    rev = (rev * 10) + (temp % 10);
  }
  if(rev == n) return 1;
  else return 0;
}

int main()
{
  int t, c = 0;
  int n;
  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    bool f = fnc(n);
    printf("Case %d: %s\n", ++c, f ? "Yes" : "No");
  }
  
  return 0;
}