// Game Header File
#ifndef GAME_H
#define GAME_H

struct player{
	int money=100;
	int lives=3;
	int stops=0;
};

struct location{
	int position;
	std::string name;
	location* next;
	location* prev;
	std::string message;
	bool getMoney;
	bool loseMoney;
	bool playerDeath;
	bool playerLost;
	int changeInMoney;
};

class Game{
	public:
		Game();
		~Game();
		location* buildGame();
		int rollDie();
		location* movePlayer(location* temp, int rollSum);
		void printLocationInfo(location* playerLocation, player* thePlayer);
		void getLocationInfo(location* playerLocation, player* thePlayer);
		void addPlayerMoney(player* thePlayer, int amount);
		void subtractPlayerMoney(player* thePlayer, int amount);
		void restartPlayer(player* thePlayer);
		void getPlayerInfo(player* thePlayer);
		void increaseMoves();
	private:
		int numberMoves=0;
		
};
#endif