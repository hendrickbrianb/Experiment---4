#include<iostream>
#include<conio.h>

using namespace std;
int add()
{
	int ans1,x,y;
	cout <<"Enter Two Numbers:"<<" "<<flush;
	cin >> x >> y;
	ans1 = x + y;
	cout <<"Result:"<<" "<< ans1;
	return ans1;
}
int subtract()
{
	int ans2,x,y;
	cout <<"Enter Two Numbers:"<<" "<<flush;
	cin >> x >> y;
	ans2 = x - y;
	cout <<"Result:"<<" "<< ans2;
	return ans2;
}
int multiply()
{
	int ans3,x,y;
	cout <<"Enter Two Numbers:"<<" "<<flush;
	cin >> x >> y;
	ans3 = x * y;
	cout <<"Result:"<<" "<< ans3;
	return ans3;
}
int divide()
{
	int ans4,x,y;
	cout <<"Enter Two Numbers:"<<" "<<flush;
	cin >> x >> y;
	if(y==0) {
	cout <<"You Must Enter A Nonzero Number"<<endl;
	}
	else{
	ans4 = x / y;
	cout <<"Result:"<<" "<< ans4;
	}
	return ans4;
}
int modul()
{
	int ans5,x,y;
	cout <<"Enter Two Numbers:"<<" "<<flush;
	cin >> x >> y;
	ans5 = x % y;
	cout <<"Result:"<<" "<< ans5;
	return ans5;
}
void def()
{
	cout << "Invalid"<< endl;
}


int main()
{	
	
	char answer;
	bool quit = false;
	
	do{
	int choice;
	cout <<"MENU:"<<endl;
	cout <<"    1.Add"<<endl;
	cout <<"    2.Subtract"<<endl;
	cout <<"    3.Multiply"<<endl;
	cout <<"    4.Divide"<<endl;
	cout <<"    5.Modulus"<<endl;
	cout <<endl;
	cout <<"Enter Your Choice:"<<" "<<flush;
	cin >> choice;

	switch (choice)
	{
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			multiply();
			break;
		case 4:
			divide();
			break;
		case 5:
			modul();
			break;
		default:
			def();
			
	}
	cout <<"\nContinue:"<<" "<<flush;
	cin >> answer;
	switch (answer)
	{
	case 'y':
	case 'Y':
			quit = false;
			break;
	default:
			quit = true;
	}
	cout <<endl;
	}while(!quit);
	
	getch();
	return 0;
}

