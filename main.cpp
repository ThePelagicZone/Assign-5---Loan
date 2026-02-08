#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << fixed << setprecision(2);

  // Parameters
  double balance; 
  double monthlyPayment;
  double apr;
  int month = 0;

  // Inputs
  cout << "Enter balance: ";
  cin >> balance;

  cout << "Enter Payment: ";
  cin >> monthlyPayment;

  cout << "Enter APR: ";
  cin >> apr;

  // Monthly Interest Rate
  double monthlyRate = (apr/100) / 12;

  //Begin Table
  cout << "\nMonth\tInt.\tPay\tBalance" << endl;

  
}
