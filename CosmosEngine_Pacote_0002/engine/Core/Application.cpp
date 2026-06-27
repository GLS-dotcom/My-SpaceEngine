#include "Application.hpp"
#include "../Platform/Window.hpp"
int Cosmos::Application::Run(){Cosmos::Window w(1280,720,"Cosmos Engine");while(w.Poll()){}return 0;}
