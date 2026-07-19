#include <RigidBody.h>
#include <bits/stdc++.h>
using namespace std;  

class PhysicsWorld {
public:
    void applyGravity();
    void applyDrag();
    
private:
    vector<RigidBody> bodies;
}