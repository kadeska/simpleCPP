#pragma once

#include "helper.hpp" // Ensure this is included
#include <glm/glm.hpp> // Assuming glm is used for matrix and vector operations
#include <string>


class Cube {
public:
    BlockType::BlockTypes blockType;
    const int cube_ID;
    const char* cube_str;
    glm::mat4 cube_model;
    float cube_angle;
    glm::vec3 position;

    // Default constructor
    Cube();

    // Custom constructor
    Cube(const int ID, const char* str, glm::mat4 model, float angle, glm::vec3 pos);

    void render();
    void translate(glm::mat3 translation);
    glm::mat4 getCube_model();
    void setCube_model(glm::mat4 &newCube_model);
    glm::vec3 getPos();
};

