//
// Created by ethan on 11/29/2021.
//

#include "Renderer.h"
#include <cassert>
#include <array>
#include <vector>
#include "Renderer.h"
#include "Pixel.h"
using namespace std;
Renderer::~Renderer() = default;

void Renderer::render_art(array<size_t, 2> pos, const vector<vector<char>>& art, PixelBuffer& buffer) const {
    int countX = 0;
    int countY = 0;
    int tempY;
    tempY = (int)pos[0];
    int tempX;
    tempX = (int)pos[1];
    for (int i = 0; i < art.size(); i++)
    {
        for (char j : art[i])
        {
            Pixel pixel = j;
            countY++;
            pos[0] = pos[0] + 1;
            if(pos[0] >= buffer.width())
            {
                break;
            }
            else
            {
                buffer.set(pos, Pixel(j, render_color()));
            }
        }
        if(countX < art.size())
        {
            countX++;
            pos[1] = pos[1] + 1;
        }
        countY = 0;
        pos[0] = tempY;
        if(pos[1] >= buffer.height())
        {
            pos[1] = tempX;
            break;
        }
    }
};

void Renderer::render_trace(array<size_t, 2> pos, const vector<vector<char>>& art, PixelBuffer& buffer) const {
    if(pos[0] > buffer.width()/2)
    {
        pos[0] = pos[0] + art.size();
        pos[1] = pos[1] + art.size();
        for(int i = 0; i < buffer.height(); i++)
        {
            for(int j = 0; j < buffer.width(); j++)
            {
                Pixel pixel = '/';
                if(pos[0] >= buffer.width() || pos[1] >= buffer.height())
                {
                    break;
                }
                else
                {
                    buffer.set(pos, Pixel( '/', render_color()));
                }
            }
            pos[0] = pos[0] - 1;
            pos[1] = pos[1] + 1;
        }
    }
    else if(pos[0] < buffer.width()/2)
    {
        pos[0] = pos[0] + art.size();
        pos[1] = pos[1] + art.size();
        for(int i = 0; i < buffer.height(); i++)
        {
            for(int j = 0; j < buffer.width(); j++)
            {
                Pixel pixel = '\\';
                if(pos[0] >= buffer.width() || pos[1] >= buffer.height())
                {
                    break;
                }
                else
                {
                    buffer.set(pos, Pixel('\\', render_color()));
                }
            }
            pos[0] = pos[0] + 1;
            pos[1] = pos[1] + 1;
        }
    }
    else if(pos[0] == buffer.width()/2)
    {
        pos[0] = pos[0] + art.size();
        pos[1] = pos[1] + art.size();
        for(int i = 0; i < buffer.height(); i++)
        {
            for(int j = 0; j < buffer.width(); j++)
            {
                Pixel pixel = '|';
                if(pos[0] >= buffer.width() || pos[1] >= buffer.height())
                {
                    break;
                }
                else
                {
                    buffer.set(pos, Pixel('|', render_color())); //Pixel::Color::WHITE
                }
            }
            pos[1] = pos[1] + 1;
        }
    }
}

SolidColor::SolidColor(Pixel::Color color) {
    _color = color;
}

Pixel::Color SolidColor::render_color() const {
    return _color;
}

SolidColor::~SolidColor() = default;

RandomColor::RandomColor() = default;

RandomColor::~RandomColor() = default;

Pixel::Color RandomColor::render_color() const {
    return Pixel::random_color();
}
