#include <iostream>
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4

int main() {
    auto arr = glm::vec3(-1.0f, 0.0f, 0.0f);
    std::cout << sizeof(arr) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    system("PAUSE");
    return 0;
}
