#include <bits/stdc++.h>
using namespace std;
int main() {
  double a, b, c;
  double x, xx;
  cin >> a >> b >> c;
  if (a == 0){
    cout << "Se a detectado un error";
  }
  else {
      
    x=(-b-sqrt(b*b-4*a*c))/(2*a);
    xx=(-b+sqrt(b*b-4*a*c))/(2*a);
    printf("%.2f\n", x);
    printf("%.2f\n", xx);
    
  }
}