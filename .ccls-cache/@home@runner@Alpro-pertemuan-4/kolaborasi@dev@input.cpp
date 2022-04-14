#include <iostream>
#include <fstream>
#include "../library/input.h"

int main(){
  Input input;
  input.pengeluaran_bln();
  input.tabungan_bln();
  input.tofile();
  return 0;
}