#include <SFML/Graphics.hpp>
#include "PhysicsWorld.h"

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Physics Engine");
    sf::Clock clock;
    PhysicsWorld world;

    // Add one body
    world.addBody(1, Vector2(400, 100));

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
            window.close();
        }

        // Time since last frame
        float dt = clock.restart().asSeconds();

        // Update physics
        world.update(dt);

        // Clear the window
        window.clear(sf::Color::Black);

        for (RigidBody& body : world.getBodies()) {
            sf::CircleShape circle(20.f);
            circle.setOrigin({200.f, 200.f});
            circle.setPosition({static_cast<float>(body.position.x),static_cast<float>(600 - body.position.y)});
            window.draw(circle);
        }
        window.display();
    }

    return 0;
}