#include <PhysicsWorld.h>

void PhysicsWorld::applyGravity() {
    for(RigidBody& body : bodies) {
        body.applyForce(Vector2(0, -9.8));
    }
}

void PhysicsWorld::applyDrag() {
    for(RigidBody& body : bodies) {
        /*body.applyForce();*/
    }
}

void PhysicsWorld::clearForces() {
    for(RigidBody& body : bodies) {
        body.force.x = body.force.y = 0;
    }
}

void PhysicsWorld::update() {
    applyGravity();
    applyDrag();
    for(RigidBody& body : bodies) {
        body.update();
    }
    clearForces();
}