﻿#pragma once
#include <gl/freeglut.h>
#include "drawable.h"

class game_border : public drawable {
public:
    ~game_border() override;
    void render() override;
};
