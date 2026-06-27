#include "VulkanDebug.hpp"
#include <vector>
#include <iostream>
namespace Cosmos {
bool VulkanDebug::CheckValidationLayerSupport(){
    uint32_t count=0;
    vkEnumerateInstanceLayerProperties(&count,nullptr);
    return count>0;
}
void VulkanDebug::ListInstanceExtensions(){
    uint32_t count=0;
    vkEnumerateInstanceExtensionProperties(nullptr,&count,nullptr);
    std::cout<<"Available instance extensions: "<<count<<"\n";
}
}
