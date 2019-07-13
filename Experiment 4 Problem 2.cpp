#include<iostream> 
#include<conio.h>
using namespace std; 
// this is a void function. It is used to easily program a complicatd program. A divide and conquer approach.
void selectionSort(int x[], int term)
{
	
    int num1, num2, min, temp;
   // this is a nested loop which a set of numbers was displayed and sorted. It depends on the use if it is bubble or sorted.
    for (num1 = 0; num1 < term - 1; num1++) {
        min = num1;
	for (num2 = num1 + 1; num2 < term; num2++)
        if (x[num2] < x[min])
    // this is where sorting happens when an array of numbers was compared to the another array it will execute. If it is true it will execute
    // and stored into temp. 
        min = num2;
 		temp = x[num1];
        x[num1] = x[min];
        x[min] = temp;
   }
}


// this is where the selection sort will execute.

int main()
{
	int x[100], num1, num2, term, temp;
	cout << "Selection Sorting..."<<endl;
	cout << "Enter the array size: "<<" "<<flush;
	cin >> term;
	cout << "Enter the " << term << " elements:"<<endl; 
	
	for (num1=0; num1<term; ++num1)
	{
	cin >> x[num1];
	}
	for (num1=1; num1<term; ++num1)
	{
		for (num2=0; num2 < (term - num1); ++num2)
			if (x[num2] > x[num2 + 1])
			{
				temp = x[num2];
				x[num2] = x[num2 + 1];
				x[num2 + 1] = temp;
			}
	}
	
	cout << "\nAfter using selection or bubble sort: \n";
	for (num1=0; num1<term; ++num1)
	cout <<endl;
	cout << x[num1] << "," ;
		
	getch();
	return 0;
}
