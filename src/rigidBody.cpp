#include "RigidBody.h"

RigidBody::RigidBody(double mass, Vector2& position) {
    this->mass = mass;
    this->position = position;
}

void RigidBody::applyForce(Vector2 force) {
    this->force += force;
}

void RigidBody::update(double dt) {
    acceleration = force/mass;
    velocity += acceleration * dt;
    position += velocity * dt;     
}

