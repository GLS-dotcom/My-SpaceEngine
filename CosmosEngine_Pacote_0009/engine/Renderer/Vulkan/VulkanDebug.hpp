#pragma once
#include <vulkan/vulkan.h>
namespace Cosmos {
class VulkanDebug {
public:
    static bool CheckValidationLayerSupport();
    static void ListInstanceExtensions();
};
}
