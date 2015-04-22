// Final Project
#include <iostream>
#include <fstream>
#include "Game.h"
using namespace std;

int main(){
	location* playerLocation = new location;
	int rollSum = 0;
	string userResponse;
	
	Game g; 
	//location* temp = new location;
	cout<<"You are in Boulder. Do you want to go to DisneyLand? (yes or no)"<<endl;
	getline(cin, userResponse);
	if (userResponse== "yes"){
		playerLocation = g.buildGame();
		//print out starting city info
		while (userResponse != "no"){
			if (userResponse == "yes"){
				
				playerLocation = g.movePlayer(playerLocation, rollSum); 
				
				cout<<"Player Location is: "<<playerLocation->position<<endl;
			}
			else{
				cout<<"Please enter yes or no."<<endl; // fix later
			}
			if(playerLocation->position == 24)
			{
				userResponse = "no";
			}
			else
			{
				cout<<"Do you want to continue? (yes or no)"<<endl; 
				getline(cin, userResponse);
			}
		}
	}
	if(playerLocation->position == 24)
	{
		cout<<"You made it to DisneyLand!"<<endl;
	}
	cout<<"Goodbye!"<<endl;
}
