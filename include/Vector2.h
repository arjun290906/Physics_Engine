class Vector2 {
public: 
    double x;
    double y;
    Vector2();
    Vector2(double x, double y);
    Vector2& operator+=(const Vector2& b);
    Vector2 operator+(const Vector2& b) const;  
    Vector2& operator-=(const Vector2& b);
    Vector2 operator-(const Vector2& b) const;
    Vector2& operator*=(double scalar);
    Vector2 operator*(double scalar) const;
    Vector2& operator/=(double scalar);
    Vector2 operator/(double scalar) const;
};