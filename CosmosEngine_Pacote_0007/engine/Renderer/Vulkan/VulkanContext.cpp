#include "VulkanContext.hpp"
#include "ValidationLayers.hpp"
namespace Cosmos{
bool VulkanContext::Initialize(){
    auto layers=ValidationLayers::Requested();
    (void)layers;
    return true; // Próximo pacote: criação real da VkInstance
}
void VulkanContext::Shutdown(){}
}
