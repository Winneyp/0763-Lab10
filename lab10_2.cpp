#include<iostream>
using namespace std;

//Write the function printO() here

int printO(int a,int b)
{
    if (a<=0 || b<=0) cout << "Invalid input";
    else
    {
        for(int i=0; i<a; i++)
        {
            for(int i=0; i<b; i++)
            {
                cout << "O";
            }
            cout << endl;
        }
    }
    return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
