
class RigidBody {
    double mass;
    double velocity;
    double position;
    double acceleration;
    void applyForce(double force) {
        acceleration = force / mass;
    }
    
}