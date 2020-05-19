#pragma once

namespace wig {

class Vector {
public:
    static Vector pixels(float px)
    {
        return {px, 0.f, 0.f};
    }

    static Vector centimeters(float cm)
    {
        return {0, cm, 0.f};
    }

    static Vector fraction(float fr)
    {
        return {0, 0.f, fr};
    }

    Vector& operator+=(const Vector& other)
    {
        _pixels += other._pixels;
        _centimeters += other._centimeters;
        _fraction += other._fraction;
        return *this;
    }

    Vector& operator-=(const Vector& other)
    {
        _pixels -= other._pixels;
        _centimeters -= other._centimeters;
        _fraction -= other._fraction;
        return *this;
    }

private:
    Vector(float pixels, float centimeters, float fraction)
        : _pixels(pixels)
        , _centimeters(centimeters)
        , _fraction(fraction)
    { }

    float _pixels;
    float _centimeters;
    float _fraction;
};

inline Vector operator "" _px(long double value)
{
    return Vector::pixels(static_cast<float>(value));
}

inline Vector operator "" _cm(long double value)
{
    return Vector::centimeters(static_cast<float>(value));
}

inline Vector operator "" _fr(long double value)
{
    return Vector::fraction(value);
}

} // namespace wig
