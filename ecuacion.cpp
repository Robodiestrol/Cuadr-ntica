#include <bits/stdc++.h>
using namespace std;
int main() {
  double a, b, c;
  double x, xx;
  cout<<"Ingrese la vaariable de de A, B, C de la operacion"<<endl;
  cin >> a >> b >> c;
  if (a == 0){
    cout << "Se a detectado un error";
  }
  else {
      
    x=(-b-sqrt(b*b-4*a*c))/(2*a);
    xx=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"El resultado de x1 es: "<<endl;
    printf("%.2f\n", x);
    cout<<"El resultado de x2 es: "<<endl;
    printf("%.2f\n", xx);
    
  }
}