#pragma once
#include <vector>
#include <string>
namespace Cosmos {
class ValidationLayers {
public:
    static std::vector<const char*> Requested() {
#ifndef NDEBUG
        return {"VK_LAYER_KHRONOS_validation"};
#else
        return {};
#endif
    }
    static bool Enabled() {
#ifndef NDEBUG
        return true;
#else
        return false;
#endif
    }
};
}
