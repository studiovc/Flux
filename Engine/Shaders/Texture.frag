#version 150 core

uniform sampler2D tex;

in vec2 pass_texCoords;

out vec4 fragColor;

void main()
{
    fragColor = texture(tex, pass_texCoords);
}
