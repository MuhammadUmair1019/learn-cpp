// Write a program to offer discount on total bill amount 
// Program should take Total amount as input and caluclate discount
// 1- if bill amount < 100 no discount
// 2- if bill amount >100 and <500 give 10% discount
// 3- if bill amount >=500 then give 20% discount

#include<iostream>
using namespace std;

int main() {
  float billAmount;
  float discount = 0.0;

  cout<<"Enter Bill Amount:";
  cin>>billAmount;

  if(billAmount>= 500) 
    discount = billAmount*20/100;
  else if(billAmount>100 && billAmount<500)
    discount = billAmount*10/100;

  cout<<"Bill Amount:"<<billAmount<<endl;
  cout<<"Total Amount:"<<discount<<endl;
  cout<<"Discounted Amount:"<<billAmount-discount<<endl;
}