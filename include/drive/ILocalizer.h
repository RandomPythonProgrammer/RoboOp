#pragma once
#include "common/Pose2d.h"

class ILocalizer {
public:
    virtual ~ILocalizer() = default;
    virtual Pose2d getPose() const = 0;
    virtual void update() = 0;
};