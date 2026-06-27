#pragma once
#include <string>
namespace Cosmos {
class Window {
public:
    Window(int width,int height,const std::string& title);
    bool PollEvents();
    void Close();
    bool IsOpen() const;
private:
    bool m_Open;
    int m_Width,m_Height;
    std::string m_Title;
};
}
