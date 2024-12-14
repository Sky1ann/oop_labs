#pragma once

#include "npc.h"

struct Pegas : public NPC {
    Pegas(int x, int y);
    Pegas(std::istream &is);

    bool accept(std::shared_ptr<NPC> visitor) override;
    bool fight(std::shared_ptr<NPC> other) override;
    void print() override;
    void save(std::ostream &os) override;
};
