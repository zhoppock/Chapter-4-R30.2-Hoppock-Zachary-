// Hoppock, Zachary
// random.cpp
// 10/11/2020
// Program generates random numbers
// Version # 1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int r;
  srand((int)time(0));
  int i = 0;
  while(i++ < 10) {
    r = (rand() % 100) + 1;
  }
  cout << r << " ";
  return 0;
}