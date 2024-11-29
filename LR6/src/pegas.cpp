#include "../include/pegas.h"
#include "../include/knight.h"
#include "../include/dragon.h"

Pegas::Pegas(int x, int y) : NPC(PegasType, x, y) {}

Pegas::Pegas(std::istream& is) : NPC(PegasType, is) {}

void Pegas::print() {
    std::cout << *this;
}

bool Pegas::is_pegas() const {
    return true;
}

bool Pegas::fight(std::shared_ptr<Pegas> other) {
    fight_notify(other, true);
    return false;
}

bool Pegas::fight(std::shared_ptr<Dragon> other) {
    fight_notify(other, false);
    return false;
}

bool Pegas::fight(std::shared_ptr<Knight> other) {
    fight_notify(other, false);
    return false;
}

void Pegas::save(std::ostream& os) {
    os << PegasType << std::endl;
    NPC::save(os);
}

std::ostream& operator<<(std::ostream& os, Pegas& Pegas) {
    os << "Pegas: " << *static_cast<NPC*>(&Pegas) << std::endl;
    return os;
}

bool Pegas::accept(const std::shared_ptr<NPC>& attacker){
    return false;
}