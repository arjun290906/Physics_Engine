#include <RigidBody.h>
#include <bits/stdc++.h>
using namespace std;  

class PhysicsWorld {
public:
    void applyGravity();
    void applyDrag();
    void clearForces();
    void update();
    void addBody();
private:
    vector<RigidBody> bodies;
}