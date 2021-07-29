//Simple calculator.

#include <iostream>
using namespace std;

int a;
int b;
int c;

int sum;

void sumFunc(){

  cout << sum << endl;

  cout << "Put in the first cunt" << endl;
  cin >> a;

  cout << "Put in the second cunt." << endl;
  cin >> b;

  sum = a + b;

  cout << "Heres the answer cunt." << endl;

  cout << sum << endl;
}

void calcFunc(){

  cout << "Press 1 for addition." << endl;

  cin >> c;

  if( c == 1 ){
    sumFunc();
  }

  else{
    cout << "Pick a sensible number like 1." << endl;
  }
}

int main(){

 calcFunc(); 

  return 0;
}
