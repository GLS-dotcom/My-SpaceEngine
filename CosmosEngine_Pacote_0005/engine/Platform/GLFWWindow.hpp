#pragma once
#include "Window.hpp"
namespace Cosmos{
class GLFWWindow: public Window{
public:
 GLFWWindow(int w,int h,const std::string&t);
 bool Initialize();
};
}
