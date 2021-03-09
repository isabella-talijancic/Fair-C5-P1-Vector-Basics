//Hero's Inventory: Demonstrates vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string magicItem;
int math;
void introduction();
void displayInventory();
void emptyInventory();
void chooseItems();
void clearInventory();
int MAX = 8;
//The array has been converted to a vector
vector <string> inventory;

int main()
{
    introduction();
    void emptyInventory();
	chooseItems();
	
	cout << string(70, '-') << "\n";
	displayInventory();
	
    cout << string(70, '-') << "\n";
	math = inventory[7].size() * (6);
	cout << "The '" << inventory[7] << "' contains " << math << "% of mana.";
    
	cout << "\n" << string(70, '-') << "\n";
    cout << "We actually ran out of that last item...\n";
    inventory.pop_back();
    displayInventory();
	clearInventory();

	cout << string(70, '-') << "\n";
    cout << "Well... Here is the 'Demon-Dweller Sword' for all your trouble.\n";
	inventory.push_back("Demon-Dweller Sword - It emanates tendrils of Anti Magic!");
    displayInventory();
	
	cout << string(70, '-') << "\n";
	cout << "\n✫ ✫ End of the Game ✫ ✫";
	return 0;
}
//Function Definitions
void introduction()
{
	cout << "✫ ✫ Magic Knights ✫ ✫";
    cout << "\n\nWelcome! As part of the Black Bulls Magic Knights, you are in need of";
    cout << "\nnew weapons for your grimoire to summon.";
    cout << " \nBefore we begin, the grimoire inventory must be refreshed...";
    cout << "\nPlease type in 8 magical weapons of your choice:";
    cout << "\n" << string(70, '-') << "\n";
}
void displayInventory()
{
    cout << "Magical Items:\n\n";
    for (int i = 0; i < inventory.size(); ++i)
	{
        cout << "\t" << inventory[i] << endl;
	}
}
void emptyInventory()
{
	for (int i = 0; i < inventory.size(); ++i)
	{
        inventory.empty();
	}
}
void clearInventory()
{
	cout << "\n" << string(70, '-') << "\n";
	cout << "Oh no! Someone stole the items!";
	cout << "\nMagical Items:\n";
	for (int i = 0; i < inventory.size(); ++i)
	{
        inventory.clear();
	}
}
void chooseItems()
{
	for (int i = 0; i < MAX; i++)
	{
		cout << "Magical Item: ";
		getline(cin, magicItem);
		inventory.push_back(magicItem);
	}
}