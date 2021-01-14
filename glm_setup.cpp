#include <iostream>
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4

int main(){
    auto arr3 = glm::vec3(-1.0f, 0.0f, 0.0f);
    auto arr4 = glm::vec4(-1.0f, 0.0f, 0.0f, 0);
    std::cout << sizeof(arr3) << std::endl;
    std::cout << sizeof(arr4) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    system("PAUSE");
    return 0;
}