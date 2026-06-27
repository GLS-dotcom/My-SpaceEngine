#pragma once
#include <vulkan/vulkan.h>
namespace Cosmos {
class VulkanInstance {
public:
    bool Create();
    void Destroy();
    VkInstance Get() const { return m_Instance; }
private:
    VkInstance m_Instance = VK_NULL_HANDLE;
};
}
