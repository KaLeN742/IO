#include <iostream>
using namespace std;

int silnia(int n)
{
	if(n<=1)
	{
	return 1;
	}
	else
	{
	return n*silnia(n-1);
	}
}

int main() {
    int n;
    cin>>n;


    if(n < 0)
    {
    	cout<<"Liczba nie moze byc ujemna!"<<endl;
	return 1;
    }

    cout<<silnia(n)<<endl;
    return 0;
}

