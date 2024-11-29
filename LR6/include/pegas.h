#pragma once
#include "npc.h"

struct Pegas : public NPC {
    Pegas(int x, int y);
    Pegas(std::istream& is);

    void print() override;

    bool is_pegas() const override;

    bool accept(const std::shared_ptr<NPC>& attacker) override;

    bool fight(std::shared_ptr<Pegas> other) override;
    bool fight(std::shared_ptr<Dragon> other) override;
    bool fight(std::shared_ptr<Knight> other) override;

    void save(std::ostream& os) override;

    friend std::ostream& operator<<(std::ostream& os, Pegas& Pegas);
};
