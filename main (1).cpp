#include <iostream>

using namespace  std; 

int main() {

  for(int i =1; i<=5; i++){
    if (i%2==0){
    cout << i;
  }
  }
  cout << endl;

  for (int j =1 ; j<=5; j++){
    cout << "helloooo" << endl;
  }
  //print even number s from 2 to 20

  for  (int k =2; k<=20 ; k+=2){
    cout << k << endl;
  }
  int sum = 0;
  for (int l =1 ; l <= 100; l++){
    sum += l;
  }

  cout << "sum = " << sum <<  endl;

  for (int z =10; z<=100; z+=10){
    cout << z << endl;
  }
 
  for (int r =1; r <= 22; r ++){
  cout << "My name is Ulices Alcantar and I am 22 years old" << endl;
}
  for (int x = 10; x>=1; x--){
    cout << x << endl;
  }

  for (int c =5; c<=50; c+=5){
   
  cout << c << endl;
  }
for (int v=1; v<=10; v++){
  cout << v*5 << endl;
}

 return 0;

  
}