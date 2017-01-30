#include "Skybox.h"

#include <Engine/Source/Vector3f.h>

#include "Transform.h"
#include "Matrix4f.h"

#include <glad/glad.h>

namespace Flux {
    Skybox::Skybox(const char* paths[6]) {
        create(paths, false);
    }

    void Skybox::render() {


    }
}
