#include "Vector2.h"
Vector2::Vector2(double x, double y) {
    this->x = x;
    this->y = y;
}
Vector2& Vector2::operator+=(const Vector2& b) {
    x += b.x;
    y += b.y;
    return *this;
}
Vector2 Vector2::operator+(const Vector2& b) const {
    Vector2 result = *this;
    result += b;
    return result;
}
Vector2& Vector2::operator-=(const Vector2& b) {
    x -= b.x;
    y -= b.y;
    return *this;
}
Vector2 Vector2::operator-(const Vector2& b) const {
    Vector2 result = *this;
    result -= b;
    return result;
}
Vector2& Vector2::operator*=(double scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}
Vector2 Vector2::operator*(double scalar) const {
    Vector2 result = *this;
    result *= scalar;
    return result;
}
Vector2& Vector2::operator/=(double scalar) {
    x /= scalar;
    y /= scalar;
    return *this;
}
Vector2 Vector2::operator/(double scalar) const {
    Vector2 result = *this;
    result /= scalar;
    return result;
}
