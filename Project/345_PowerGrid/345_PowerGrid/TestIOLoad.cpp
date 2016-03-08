/*
#include <iostream>
#include <string>

#include "House.h"
#include "Player.h"
#include "HouseManager.h"
#include "Resource.h"
#include "TurnSummary.h"
#include "ResourceMarket.h"
#include "Powerplant.h"
#include "IOFile.h"

using namespace std;

int main() {
	Player* player1 = new Player("not");
	Player* player2 = new Player("important");
	
	IOFile::loadPlayer(*player1, *player2);

	AreaManager * area_manager = new AreaManager(); //do not delete

	area_manager->setGameAreas(*IOFile::loadAreas());

	MapOfPlayersCity * map = new MapOfPlayersCity(new Map(area_manager));

	IOFile::loadMap(map);
	system("pause");

}
*/