// User enters his stats and they will be displayed.





#include<iostream>
#include<string>

using namespace std;


int main(){

	int ATT, STR, DEF, HP, RNG, MG, PRAY, SUMM;

	double  MELEE, RANGE, MAGE, melee_formula, range_formula, mage_formula,base_level,class_level,combatLevel;
	
	// ask the user his/her levels

	cout << "What is your Attack level?\n";
	cin >> ATT;
	cout << "What is your Strength level?\n";
	cin >> STR;
	cout << "What is your Defence level?\n";
	cin >> DEF;
	cout << "What is your Hitpoints level?\n";
	cin >> HP;
	cout << "What is your Range level?\n";
	cin >> RNG;
	cout << "What is your Mage level?\n";
	cin >> MG;
	cout << "What is your Prayer level?\n";
	cin >> PRAY;
	cout << "What is your Summoning level?\n";
	cin >> SUMM;

	//formulas for the calculations
	melee_formula = (13 / 40)*(ATT + STR);
	range_formula = (13 / 40)*(2 * RNG);
	mage_formula = (13 / 40)*(2 * MAGE);
	base_level = DEF + HP + (PRAY / 2) + (SUMM / 2);

	if (MELEE > RANGE && MELEE > MAGE)
	{
		class_level = melee_formula;
		combatLevel = (base_level + class_level) / 4;
		cout << "Your Combat level is: " << combatLevel << endl;
	}

	else if (RANGE > MELEE && RANGE > MAGE)
	{
		class_level =range_formula;
		combatLevel = (base_level + class_level) / 4;
		cout << "Your Combat level is: " << combatLevel << endl;
	}

	else if (MAGE > MELEE && MAGE > RANGE)
	{
		class_level = mage_formula;
		combatLevel = (base_level + class_level) / 4;
		cout << "Your Combat level is: " << combatLevel << endl;
	}

	else
	{
		class_level = melee_formula;
		combatLevel = (base_level + class_level) / 4;
		cout << "Your Combat level is: " << combatLevel << endl;
	}


	system("pause");
	return 0;
}