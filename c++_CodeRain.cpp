//Please use DevC++ debug this file!
#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
int main(){
  scard(time(0));
  while(true){
    for(int i=1;i<=20;i++){
      cout<<rand();
    }
    cout<<endl;
  }
  return 0;
}
