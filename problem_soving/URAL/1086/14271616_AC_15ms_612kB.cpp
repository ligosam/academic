#include <bits/stdc++.h>
#define le 163849
using namespace std;
bool n[le >> 1];
vector<int> v;
void se(){
    int rt = sqrt(le) + 1, k;
    for(int i = 3; i < rt; i += 2) if(!n[i >> 1]) for(int j = i * i, k = i << 1; j < le; j += k) n[j >> 1] = 1;
    v.push_back(2);
    v.push_back(2);
    for(int i = 3; i < le; i += 2) if(!n[i >> 1]) v.push_back(i);
}
int main(){
    se();
    int t, a;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &a);
        printf("%d\n", v[a]);
    }
    return 0;
}
