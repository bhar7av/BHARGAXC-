#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
	srand((unsigned int)time(NULL));
	
	int player_throw=0;
	int ai_throw=0;
	bool draw = false;
	
	do{
	
		cout<< "Select your throw."<<endl;
		cout<< "1) ROCK"<< endl;
		cout<< "2) PAPER" << endl;
		cout<< "3) SCISSORS"<< endl;
		cout<< "Selection: ";
		cin>> player_throw;
		
		cout<< endl;
		
		ai_throw=(rand()%3)+1;
		if(ai_throw== ROCK)
		{
			cout<<"AI throws ROCK."<<endl;
			
		}
		else if(ai_throw ==PAPER)
		{
			cout<<"AI throws PAPER"<< endl;
		}
		
		else if(ai_throw== SCISSORS)
		{
			cout<<"AI throws SCISSORS." <<endl;
		}
		
		draw= false;
		if (player_throw == ai_throw)
	    {
	    	draw = true;
	    	cout<<"Draw! Play again!"<< endl;
	    	
		}
		
		else if (player_throw ==ROCK && ai_throw == SCISSORS)
		{
			cout<<"ROCK beats SCISSORS! You win!"<< endl;
			
		}
		else if(player_throw== ROCK && ai_throw == PAPER)
		{
			cout<<"PAPER beats ROCK! YOU LOSE."<< endl;
			
		}
		
		else if(player_throw==PAPER && ai_throw== SCISSORS)
		{
			cout<<"SCISSORS beats PAPER, YOU LOSE"<< endl;
		}
		
		else if(player_throw==SCISSORS && ai_throw== PAPER)
		{
			cout<<"SCISSORS beats PAPER, YOU WON."<<endl;
		}
		
	    else if(player_throw== SCISSORS && ai_throw== ROCK)
		{
			cout<<"ROCK beats SCISSORS, YOU LOSE."<< endl;
		}
		
		else if (player_throw== PAPER && ai_throw==ROCK)
		{
			cout<<"ROCK BEATS PAPER, YOU LOSE"<< endl;
		}
		cout<<endl;
	}while(draw);
	
	return 0;
		
	
}
