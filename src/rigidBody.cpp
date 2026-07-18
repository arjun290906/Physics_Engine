#include "RigidBody.h"

void RigidBody::applyForce(Vector2 force) {
    acceleration += force/mass;
}

void RigidBody::update(double dt) {
    acceleration = 0;

    applyForce(gravity);

    velocity += acceleration * dt;
    position += velocity * dt;     
}

Vector2 RigidBody::gravity(0, -9.8);
