#pragma once

#include "widget.hpp"

#include <memory>
#include <vector>

namespace wig {

class Layout {
public:
    void onMouseMove(int x, int y)
    {
    }

private:
    std::vector<std::unique_ptr<Widget>> _widgets;
};

} // namespace wig
