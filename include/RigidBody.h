#include "Vector2.h"

class RigidBody {
public:
    double mass;
    Vector2 velocity;
    Vector2 position;
    Vector2 acceleration;
    Vector2 force;
    RigidBody(double mass, Vector2& position);
    void applyForce(Vector2 force);
    void update(double dt);
};