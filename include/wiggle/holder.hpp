#pragma once

#include "widget.hpp"

#include <memory>
#include <vector>

namespace wig {

class Holder {
public:

private:
    std::vector<std::unique_ptr<Widget>> _widgets;
};

} // namespace wig
