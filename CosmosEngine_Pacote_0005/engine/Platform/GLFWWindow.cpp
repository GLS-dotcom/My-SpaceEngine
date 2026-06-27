#include "GLFWWindow.hpp"
namespace Cosmos{
GLFWWindow::GLFWWindow(int w,int h,const std::string&t):Window(w,h,t){}
bool GLFWWindow::Initialize(){return true;}
}
