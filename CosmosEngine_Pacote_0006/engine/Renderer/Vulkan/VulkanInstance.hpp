#pragma once
namespace Cosmos{
class VulkanInstance{
public:
 bool Create();
 void Destroy();
private:
 void* m_Instance=nullptr;
};
}
