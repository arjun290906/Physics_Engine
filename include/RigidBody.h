#include "Vector2.h"

class RigidBody {
public:
    static Vector2 gravity;
    double mass;
    Vector2 velocity;
    Vector2 position;
    Vector2 acceleration;
    void applyForce(Vector2 force);
    void initialize();
    void update(double dt);
}