#include "VulkanInstance.hpp"
namespace Cosmos {
bool VulkanInstance::Create() {
    VkApplicationInfo app{};
    app.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    app.pApplicationName = "Cosmos Engine";
    app.applicationVersion = VK_MAKE_VERSION(0,1,0);
    app.pEngineName = "Cosmos";
    app.engineVersion = VK_MAKE_VERSION(0,1,0);
    app.apiVersion = VK_API_VERSION_1_3;

    VkInstanceCreateInfo ci{};
    ci.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    ci.pApplicationInfo = &app;

    return vkCreateInstance(&ci,nullptr,&m_Instance)==VK_SUCCESS;
}
void VulkanInstance::Destroy(){
    if(m_Instance){
        vkDestroyInstance(m_Instance,nullptr);
        m_Instance=VK_NULL_HANDLE;
    }
}
}
