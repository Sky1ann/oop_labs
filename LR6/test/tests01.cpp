#include <gtest/gtest.h>
#include "../include/npc.h"
#include "../include/knight.h"
#include "../include/pegas.h"
#include "../include/dragon.h"
#include <memory>

TEST(FightTest, knightVSdragon) {
    auto knight = std::make_shared<Knight>(0, 0);
    auto dragon = std::make_shared<Dragon>(1, 1);

    EXPECT_TRUE(knight->accept(dragon));
    EXPECT_FALSE(dragon->accept(knight));
}

TEST(FightTest, dragonVSpegas) {
    auto dragon = std::make_shared<Dragon>(0, 0);
    auto pegas = std::make_shared<Pegas>(1, 1);

    EXPECT_FALSE(pegas->accept(dragon));
    EXPECT_TRUE(dragon->accept(pegas));
}

TEST(FightTest, SameTypeFightDraw) {
    auto knight1 = std::make_shared<Knight>(0, 0);
    auto knight2 = std::make_shared<Knight>(1, 1);

    EXPECT_FALSE(knight1->accept(knight2));
    EXPECT_FALSE(knight2->accept(knight1));

    auto pegas1 = std::make_shared<Pegas>(0, 0);
    auto pegas2 = std::make_shared<Pegas>(1, 1);

    EXPECT_FALSE(pegas1->accept(pegas2));
    EXPECT_FALSE(pegas2->accept(pegas1));

    auto dragon1 = std::make_shared<Dragon>(0, 0);
    auto dragon2 = std::make_shared<Dragon>(1, 1);

    EXPECT_FALSE(dragon1->accept(dragon2));
    EXPECT_FALSE(dragon2->accept(dragon1));
}

TEST(FightTest, DistanceTest) {
    auto knight = std::make_shared<Knight>(0, 0);
    auto pegas = std::make_shared<Pegas>(5, 5);

    EXPECT_FALSE(knight->is_close(pegas, 4));
    EXPECT_TRUE(knight->is_close(pegas, 10));
}
