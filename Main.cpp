#include <iostream>
using namespace std;
#include "Header/Level/LevelManager.h"

using namespace Level;

int main()
{

	string WorrierName;

	cout << " lets start the game\n\n";
	cout << "Somewhere in the world, there was an Island. And there was secret Volly village in woods\nA Prediction happened 100 years earlier,\nA worrier will come from another world and be guardian of the Village and \nprotect the village from the Marlocs and his wild Army.\n\n";

	cout << "I am Echo, the priest of the Volly Village. What is your name Worrier?\n";
	cin >> WorrierName;
	cout << "Welcome " << WorrierName <<" to the Volly, I will guide you. So the Shadow does not distract you and you follow the right path."<< endl;

	LevelManager levelManager;  // Create an instance of LevelManager

	levelManager.GameOptions();
	
};
