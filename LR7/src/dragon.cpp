#include "../include/dragon.h"

Dragon::Dragon(int x, int y) : NPC(DragonType, x, y, 50, 30) {}

Dragon::Dragon(std::istream &is) : NPC(DragonType, is) {}

bool Dragon::accept(std::shared_ptr<NPC> visitor) {
    return visitor->fight(std::shared_ptr<Dragon>(this, [](Dragon*) {}));
}

bool Dragon::fight(std::shared_ptr<NPC> other) {
    int attack = std::rand() % 6 + 1;
    int defense = std::rand() % 6 + 1;
    bool win = attack > defense;
    fight_notify(other, win);
    return win;
}

void Dragon::print() {
    std::cout << "Dragon at (" << x << ", " << y << ")\n";
}

void Dragon::save(std::ostream &os) {
    os << DragonType << " " << x << " " << y << " " << move_distance << " " << kill_distance << "\n";
}
