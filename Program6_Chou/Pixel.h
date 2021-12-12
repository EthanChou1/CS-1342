//
// Created by ethan on 11/29/2021.
//

#ifndef PROGRAM6_CHOU_PIXEL_H
#define PROGRAM6_CHOU_PIXEL_H
#pragma once
#include <stdio.h>
#include <iostream>
#include <cassert>
#include <array>

class Pixel
{
public:
    enum class Color : unsigned char
    {
        BLACK = 30,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE
    };

    Pixel(char value = ' ',
          Color color = Color::BLACK) : _value(value),
                                        _color(color)
    {}

    static Color random_color()
    {
        auto r = static_cast<unsigned char>(Color::WHITE) - static_cast<unsigned char>(Color::BLACK);
        switch (rand() % r)
        {
            case 0:
                return Color::BLACK;
            case 1:
                return Color::RED;
            case 2:
                return Color::GREEN;
            case 3:
                return Color::YELLOW;
            case 4:
                return Color::BLUE;
            case 5:
                return Color::MAGENTA;
            case 6:
                return Color::CYAN;
            case 7:
                return Color::WHITE;
            default:
                assert(!"Unknown color");
                return Color::BLACK;
        }
    }

    char value() const { return _value; }

    unsigned char color() const { return static_cast<unsigned char>(_color); }

private:
    char _value = ' ';
    Color _color = Color::BLACK;
};

class PixelBuffer
{
public:
    PixelBuffer() : _buffer(new Pixel[_width * _height])
    {
    }

    ~PixelBuffer()
    {
        delete[] _buffer;
    }

    size_t width() const { return _width; }

    size_t height() const { return _height; }

    size_t size() const { return _width * _height; }

    void init(const Pixel &pixel = Pixel())
    {
        for (size_t i = 0; i < size(); ++i)
            _buffer[i] = pixel;
    }

    void set(std::array<size_t, 2> pos, const Pixel &pixel)
    {
        assert(pos[0] < _width && pos[1] < _height);
        _buffer[_width * pos[1] + pos[0]] = pixel;
    }

    void render()
    {
        using namespace std;
        for (size_t row = 0; row < _height; ++row)
        {
            for (size_t col = 0; col < _width; ++col)
            {
                const Pixel &p = _buffer[row * _width + col];
                char b[16];
                sprintf(b, "\x1b[%um%c", p.color(), p.value());
                cout << b;
            }
            cout << endl;
        }
        //reset colors to defaults
        cout << "\x1b[0m";
    }

    std::array<size_t, 2> random_pos() const
    {
        return {rand() % _width, rand() % _height};
    }

private:
    const size_t _width = 60;
    const size_t _height = 20;
    Pixel *_buffer = nullptr;
};
#endif //PROGRAM6_CHOU_PIXEL_H
