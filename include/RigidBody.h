#include "Vector2.h"

class RigidBody {
public:
    static Vector2 gravity;
    double mass;
    Vector2 velocity;
    Vector2 position;
    Vector2 acceleration;
    Vector2 force;
    void applyForce(Vector2 force);
    void update(double dt);
}