﻿#pragma once
#include "bonus.h"

class speed_up_bonus :public bonus {
public:
    explicit speed_up_bonus(glm::vec2 const& pos)
        : bonus(pos) {}

    void render() override;
    ~speed_up_bonus() override {};
    void visit(ball& ball) override;
    void visit(game& game) override {};
    void visit(game_field& field) override {};
    void visit(rocket& player) override {};
};