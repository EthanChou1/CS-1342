//
// Created by ethan on 11/29/2021.
//

#ifndef PROGRAM6_CHOU_RENDERER_H
#define PROGRAM6_CHOU_RENDERER_H
#pragma once
#include <cassert>
#include <array>
#include <vector>
#include "Pixel.h"
//=====================================================
//NOTE: YOU ARE NOT ALLOWED TO MODIFY THIS HEADER FILE!
//=====================================================
class Renderer {
public:
    //This method is the core of the Template Method
    //design pattern.
    void render(const std::vector<std::vector<char>> &art,
                PixelBuffer &buffer) const
    {
        //Position of the upper left corner of the
        //firework art in the buffer
        std::array<size_t, 2> pos = buffer.random_pos();
        render_art(pos,art,buffer);
        render_trace(pos,art,buffer);
    }
    //TODO: implement this method in Renderer.cpp
    virtual ~Renderer();

protected:

    virtual Pixel::Color render_color() const = 0;

    //TODO: implement this method in Renderer.cpp
    void render_art(std::array<size_t, 2> pos,
                    const std::vector<std::vector<char>> &art,
                    PixelBuffer &buffer) const;

    //TODO: implement this method in Renderer.cpp
    void render_trace(std::array<size_t, 2> pos,
                      const std::vector<std::vector<char>> &art,
                      PixelBuffer &buffer) const;

};

class SolidColor : public Renderer {
public:
    //TODO: implement this method in Renderer.cpp
    SolidColor(Pixel::Color color);
    //TODO: implement this method in Renderer.cpp
    ~SolidColor();
protected:
    //TODO: implement this method in Renderer.cpp
    Pixel::Color render_color() const;
private:
    Pixel::Color _color = Pixel::Color::BLACK;
};

class RandomColor : public Renderer {
public:
    //TODO: implement this method in Renderer.cpp
    RandomColor();
    //TODO: implement this method in Renderer.cpp
    ~RandomColor();
protected:
    //TODO: implement this method in Renderer.cpp
    Pixel::Color render_color() const;
};

#endif //PROGRAM6_CHOU_RENDERER_H
