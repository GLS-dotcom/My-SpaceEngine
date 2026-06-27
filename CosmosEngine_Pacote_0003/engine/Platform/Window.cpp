#include "Window.hpp"
namespace Cosmos {
Window::Window(int w,int h,const std::string&t):m_Open(true),m_Width(w),m_Height(h),m_Title(t){}
bool Window::PollEvents(){ return m_Open; }
void Window::Close(){ m_Open=false; }
bool Window::IsOpen() const { return m_Open; }
}
