#include "Vector2.h"

class RigidBody {
    double mass;
    Vector2 velocity;
    Vector2 position;
    Vector2 acceleration;
    void applyForce(Vector2 force) {
        acceleration = force / mass;
    }
    
}