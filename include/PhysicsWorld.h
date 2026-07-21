#include "RigidBody.h"
#include <vector>

class PhysicsWorld {
public:
    void applyGravity();
    void applyDrag();
    void clearForces();
    void update(double dt);
    void addBody(int m, Vector2 pos);
    std::vector<RigidBody>& getBodies();
private:
    std::vector<RigidBody> bodies;
};