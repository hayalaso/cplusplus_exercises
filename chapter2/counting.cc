#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

  cout << " Counting from 10 to -5 " << endl;

  int counter = 10;
  const int N = counter + 5;

  for (int i=0; i<N+1 ; ++i) {
    cout << i <<" "<< counter << endl;
    counter = counter - 1;
  }

  return 0;
}
