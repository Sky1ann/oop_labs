#pragma once

#include "npc.h"

struct Knight : public NPC {
    Knight(int x, int y);
    Knight(std::istream &is);

    bool accept(std::shared_ptr<NPC> visitor) override;
    bool fight(std::shared_ptr<NPC> other) override;
    void print() override;
    void save(std::ostream &os) override;
};
