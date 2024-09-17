#include<iostream>
#include<windows.h>
using namespace std;
int main(){
  while(true){
    for(int i=1;i<=50;i++){
      cout<<char(rand());
    }
    cout<<endl;
  }
  return 0;
}
