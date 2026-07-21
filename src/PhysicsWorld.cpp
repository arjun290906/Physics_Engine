#include "PhysicsWorld.h"

void PhysicsWorld::applyGravity() {
    for(RigidBody& body : bodies) {
        body.applyForce(Vector2(0, -9.8 * body.mass));
    }
}

void PhysicsWorld::applyDrag() {
    for(RigidBody& body : bodies) {
        //body.applyForce();
    }
}

void PhysicsWorld::clearForces() {
    for(RigidBody& body : bodies) {
        body.force.x = body.force.y = 0;
    }
}

void PhysicsWorld::update(double dt) {
    applyGravity();
    applyDrag();
    for(RigidBody& body : bodies) {
        body.update(dt);
    }
    clearForces();
}

void PhysicsWorld::addBody(int m, Vector2 pos) {
    bodies.emplace_back(m, pos);
}

std::vector<RigidBody>& PhysicsWorld::getBodies() {
    return bodies;
}