#include "Application.hpp"

#include "Logger.hpp"
#include "Timer.hpp"

namespace Cosmos
{

Application::Application()
{

    Logger::Info("Cosmos Engine");

    Logger::Info("Initializing...");

    m_Running = true;

}

Application::~Application()
{

    Logger::Info("Shutdown");

}

void Application::Run()
{

    Timer timer;

    while(m_Running)
    {

        double dt = timer.Elapsed();

        Logger::Trace(dt);

        m_Running = false;

    }

}

}