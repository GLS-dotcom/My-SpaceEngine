#pragma once
#include <vulkan/vulkan.h>
namespace Cosmos{
class PhysicalDevice{
public:
 bool Pick(VkInstance instance);
 VkPhysicalDevice Get() const{return m_Device;}
private:
 VkPhysicalDevice m_Device=VK_NULL_HANDLE;
};
}
