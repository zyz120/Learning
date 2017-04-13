#version 330 core

in vec3 ourColor;
in vec2 ourTexCoord;

out vec4 color;

uniform sampler2D texture;

void main()
{
    // scolor = vec4(ourColor, 1.0f);
    color = texture(texture, ourTexCoord); 
}