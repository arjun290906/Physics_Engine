class Vector2 {
    double x; 
    double y;
    Vector2 (double x, double y) {
        this->x = x;
        this->y = y;
    }
    Vector2 operator+(const Vector2& b) const {
        return Vector2(x + b.x, y + b.y);
    }
}