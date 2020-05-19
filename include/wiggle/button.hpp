#pragma once

#include "position.hpp"
#include "widget.hpp"

#include <functional>
#include <string>
#include <utility>

namespace wig {

class Button : public Widget {
public:
    Button& position(const Vector& position)
    {
        _position = position;
        return *this;
    }

    Button& size(const Vector& size)
    {
        _size = size;
        return *this;
    }

    // TODO: font (backend-specific)

    Button& text(std::string text)
    {
        _text = std::move(text);
        return *this;
    }

    Button& action(std::function<void()> action)
    {
        _action = std::move(action);
        return *this;
    }

private:
    Vector _position;
    Vector _size;
    std::string _text;
    std::function<void()> _action;
};

} // namespace
