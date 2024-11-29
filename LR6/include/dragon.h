#pragma once
#include "npc.h"

struct Dragon : public NPC {
    Dragon(int x, int y);
    Dragon(std::istream& is);

    void print() override;

    bool is_dragon() const override;

    bool accept(const std::shared_ptr<NPC>& attacker) override;

    bool fight(std::shared_ptr<Pegas> other) override;
    bool fight(std::shared_ptr<Dragon> other) override;
    bool fight(std::shared_ptr<Knight> other) override;

    void save(std::ostream& os) override;

    friend std::ostream& operator<<(std::ostream& os, Dragon& Dragon);
};
