#pragma once
namespace Cosmos {
enum class EventType { None, WindowClose, WindowResize, KeyPressed, KeyReleased, MouseMoved };
struct Event {
    EventType type{EventType::None};
    virtual ~Event() = default;
};
}
