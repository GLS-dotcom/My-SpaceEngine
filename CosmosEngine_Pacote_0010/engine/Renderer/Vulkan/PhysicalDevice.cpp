#include "PhysicalDevice.hpp"
#include <vector>
namespace Cosmos{
bool PhysicalDevice::Pick(VkInstance instance){
 uint32_t count=0;
 vkEnumeratePhysicalDevices(instance,&count,nullptr);
 if(count==0) return false;
 std::vector<VkPhysicalDevice> devs(count);
 vkEnumeratePhysicalDevices(instance,&count,devs.data());
 m_Device=devs.front();
 return true;
}
}
