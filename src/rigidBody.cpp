#include "RigidBody.h"

void RigidBody::applyForce(Vector2 force) {
    this->force += force;
}

void RigidBody::update(double dt) {
    acceleration = force/mass;
    velocity += acceleration * dt;
    position += velocity * dt;     
}

