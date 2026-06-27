#include "Window.hpp"
using namespace Cosmos;Window::Window(int,int,const std::string&){} bool Window::Poll(){static int f=0;return f++<1;}
