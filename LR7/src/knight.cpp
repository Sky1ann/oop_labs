#include "../include/knight.h"

Knight::Knight(int x, int y) : NPC(KnightType, x, y, 30, 10) {}

Knight::Knight(std::istream &is) : NPC(KnightType, is) {}

bool Knight::accept(std::shared_ptr<NPC> visitor) {
    return visitor->fight(std::shared_ptr<Knight>(this, [](Knight*) {}));
}

bool Knight::fight(std::shared_ptr<NPC> other) {
    int attack = std::rand() % 6 + 1;
    int defense = std::rand() % 6 + 1;
    bool win = attack > defense;
    fight_notify(other, win);
    return win;
}

void Knight::print() {
    std::cout << "Knight at (" << x << ", " << y << ")\n";
}

void Knight::save(std::ostream &os) {
    os << KnightType << " " << x << " " << y << " " << move_distance << " " << kill_distance << "\n";
}
