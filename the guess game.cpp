#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int number=(rand()%100)+1;
	int guess = 0;
	do
	{
		cout<<"Enter Guess Number 1-100:";
		cin>>guess;
		
		if(guess>number)
		cout<<"Guess lower!"     <<endl;
		
	
		else if(guess<number)
		cout<<"Guess higher!"<<endl;
		else
		cout<<"You won!!"<<endl;
		
	}while (guess!=number);
}
