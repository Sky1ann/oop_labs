#include "../include/dragon.h"
#include "../include/knight.h"
#include "../include/pegas.h"

Dragon::Dragon(int x, int y) : NPC(DragonType, x, y) {}

Dragon::Dragon(std::istream& is) : NPC(DragonType, is) {}

void Dragon::print() {
    std::cout << *this;
}

bool Dragon::is_dragon() const {
    return true;
}

bool Dragon::fight(std::shared_ptr<Pegas> other) {
    fight_notify(other, true); 
    return true;
}

bool Dragon::fight(std::shared_ptr<Dragon> other) {
    fight_notify(other, false);
    return false;
}

bool Dragon::fight(std::shared_ptr<Knight> other) {
    fight_notify(other, true); 
    return false;
}

void Dragon::save(std::ostream& os) {
    os << DragonType << std::endl;
    NPC::save(os);
}

std::ostream& operator<<(std::ostream& os, Dragon& Dragon) {
    os << "Dragon: " << *static_cast<NPC*>(&Dragon) << std::endl;
    return os;
}

bool Dragon::accept(const std::shared_ptr<NPC>& attacker) {
    if (attacker->is_knight()) {
        return false;
    } else if (attacker->is_pegas()) {
        return true;
    } else if (attacker->is_dragon()) {
        return false;
    }
    return false;
}