#include <iostream>
#include <string>

using namespace std;

int main() {
  int pin = 0000; // Default pin
  int old_pin,New_pin;
  string current,reference;
  string number;
  int amount;
  int balance = 1000; // Default balance
  int attempts = 0; // Counting failed attempts
int choice;
  // Authentication
  int input_pin;
  do {
    cout << "Enter your PIN: ";
    cin >> input_pin;
    attempts++;
    if (input_pin != pin && attempts == 3) {
      cout << "Maximum attempts reached. Exiting program..." << endl;
      return 0;
    }
  } while (input_pin != pin);

  // Resetting/changing PIN
//  int new_pin;
//  char change_pin;
//  cout << "Do you want to change your PIN? (Y/N): ";
//  cin >> change_pin;
//  if (change_pin == 'Y' || change_pin == 'y') {
//    cout << "Enter your new PIN: ";
//    cin >> new_pin;
//    pin = new_pin;
//    cout << "PIN changed successfully." << endl;
//  }
cout<<"1. Check Balance"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3. Send Money"<<endl;
cin>>choice;
if(choice==1)
{
	cout<<"Your Current Balance Is "<<balance;
	
}
else if(choice==2)
{
	cout<<"Enter Previous Pin"<<endl;
	cin>>old_pin;
	if(old_pin=pin)
	{
		cout<<"Correct Pin"<<endl;
	}
	else
	{
		cout<<"Incorrect Pin"<<endl;
	}
	cout<<"Enter New Pin"<<endl;
	cin>>New_pin;
	pin=New_pin;
	cout<<"Your New Pin Is "<<New_pin;
}
else if(choice==3)
{
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	cout<<"Enter Amount To Transfere"<<endl;
	cin>>amount;
	if(amount>balance)
	{
		cout<<"Insufficient Balance"<<endl;
	}
	else
	{
		current=balance-amount;
		cout<<"Enter Reference "<<endl;
		cin>>reference;
		cout<<"Enter Pin "<<endl;
		cin>>pin;
		if(New_pin=pin)
		{
		
		cout<<"You Have Transfered "<<amount<<" To "<<number<<"With Reference as "<<reference;

}
else if(New_pin!=pin)
{
	cout<<"Failed To Send, Incorrect Pin"<<endl;
	}
	else{
		cout<<"You Have Transfered "<<amount<<" To "<<number<<"With Reference as "<<reference;
	}	}

}
//  // Checking balance
//  cout << "Your balance is: " << balance << endl;
//
//  // Sending money
//  int amount;
//  cout << "Enter the amount you want to send: ";
//  cin >> amount;
//  if (amount <= balance) {
//    balance -= amount;
//    cout << "Transaction successful. Your new balance is: " << balance << endl;
//  } else {
//    cout << "Insufficient balance. Transaction failed." << endl;
//  }
//
//  // Exiting program
//  char exit_program;
//  cout << "Do you want to exit the program? (Y/N): ";
//  cin >> exit_program;
//  if (exit_program == 'Y' || exit_program == 'y') {
//    cout << "Exiting program..." << endl;
//    return 0;
//  }

  return 0;
}
