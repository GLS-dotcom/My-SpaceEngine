#include "Window.hpp"
namespace Cosmos {
Window::Window(int,int,const std::string&):m_Open(true){}
bool Window::PollEvents(){ return m_Open; }
void Window::Close(){ m_Open=false; }
bool Window::IsOpen() const { return m_Open; }
}
