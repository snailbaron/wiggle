#pragma once

#include "vector.hpp"

#include <memory>
#include <vector>

namespace wig {

class Widget {
public:
    virtual ~Widget() {}

    virtual bool contains() { return false; }
    virtual void update(float delta) {}

    virtual void onFocus() {}
    virtual void onFocusLost() {}
    virtual void onPress() {}
    virtual void onRelease() {}
    virtual void onDrag() {}

private:
    Vector _position;
    std::vector<std::unique_ptr<Widget>> _children;
};

} // namespace wig
