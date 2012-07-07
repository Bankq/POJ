#include <iostream>
using namespace std;

int main(){
  int n = 12;
  float sum = 0.0;
  float tmp = 0.0;
  while(n--){
    cin >> tmp;
    sum += tmp;
  }
  cout << "$" << sum/12 << endl;
  return 0;
}
