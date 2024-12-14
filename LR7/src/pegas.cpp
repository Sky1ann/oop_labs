#include "../include/pegas.h"

Pegas::Pegas(int x, int y) : NPC(PegasType, x, y, 30, 10) {}

Pegas::Pegas(std::istream &is) : NPC(PegasType, is) {}

bool Pegas::accept(std::shared_ptr<NPC> visitor) {
    return visitor->fight(std::shared_ptr<Pegas>(this, [](Pegas*) {}));
}

bool Pegas::fight(std::shared_ptr<NPC> other) {
    int attack = std::rand() % 6 + 1;
    int defense = std::rand() % 6 + 1;
    bool win = attack > defense;
    fight_notify(other, win);
    return win;
}

void Pegas::print() {
    std::cout << "Pegas at (" << x << ", " << y << ")\n";
}

void Pegas::save(std::ostream &os) {
    os << PegasType << " " << x << " " << y << " " << move_distance << " " << kill_distance << "\n";
}
