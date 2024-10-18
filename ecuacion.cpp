#include <bits/stdc++.h>
using namespace std;
int main() {
  double a, b, c;
  double x, xx;
  cout<<"Este programa realisa ecuaciones cuadranticas, para lo cual primero lee los valores de A, B, C. luego de eso realisa la ecuasion dando haci el resultado de x1 y x2"<<endl;
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