#include "TacticalMarine.hh"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine *TacticalMarine::clone() const {
}

void 			TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void 			TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}