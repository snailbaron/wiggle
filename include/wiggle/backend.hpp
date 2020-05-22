#pragma once

#include <string>

namespace wig {

class Color;

class Font;

class Text {
public:
    void setString(std::string string);
};

class Geometry {
};

Geometry roundedRectangleGeometry();

class Renderer {
public:
    virtual ~Renderer() {}
};

} // namespace wig
