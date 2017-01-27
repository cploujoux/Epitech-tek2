#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {
	if (damage > 3)
		this->setHP(this->getHP() - damage + 3);
}