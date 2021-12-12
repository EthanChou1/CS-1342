#include <iostream>
#include <cassert>
#include <array>
#include <vector>
#include "Pixel.h"
#include "Renderer.h"
#include <random>
using namespace std;
//This function is for reference only.
//It shows how to set a Pixel in the buffer
int test_pixel_buffer()
{
    PixelBuffer b;
    std::array<size_t,2> pos {0, 0};
    b.set(pos, Pixel('a', Pixel::Color::WHITE));
    b.set(b.random_pos(), Pixel('b', Pixel::random_color()));
    b.render();
    return 0;
}

int randNum()
{
    random_device rdX;
    default_random_engine generatorX(rdX());
    uniform_int_distribution<int> distributionX(1,10);
    int x = distributionX(generatorX);
    return x;
}

int randFirework()
{
    random_device rdX;
    default_random_engine generatorX(rdX());
    uniform_int_distribution<int> distributionX(0,3);
    int x = distributionX(generatorX);
    return x;
}

int randColor()
{
    random_device rdX;
    default_random_engine generatorX(rdX());
    uniform_int_distribution<int> distributionX(0,4);
    int x = distributionX(generatorX);
    return x;
}

/*
   Sample Firework arts:

.* *.
 *..*
   *

`o`o`
o`o`o`o
 `o`o`


  ^,^,^
^,^,^,^,^
^,^,^,^,^
  ^,^,^


   ~@~@~
~*~@~*~@~*~
~*~@$#$@~*~
~*~@~*~@~*~
   ~@~@~

 */
int main()
{
    //uncomment to test the buffer rendering
    //test_pixel_buffer();

    using namespace std;
    typedef vector<vector<char>> Art;
    typedef vector<Art> Arts;
    //TODO define a variable for the container with the firework arts.
    Arts Firework;
    //TODO populate that container with four Art instances.
    //     Use the ASCII art samples from the comment above.
    Art firstFirework;
    string lineOne = ".* *.";
    string lineTwo = " *..*";
    string lineThree = "   * ";
    vector<char> FirstFireworkLineOne(lineOne.begin(), lineOne.end());
    vector<char> FirstFireworkLineTwo(lineTwo.begin(), lineTwo.end());
    vector<char> FirstFireworkLineThree(lineThree.begin(), lineThree.end());
    firstFirework.push_back(FirstFireworkLineOne);
    firstFirework.push_back(FirstFireworkLineTwo);
    firstFirework.push_back(FirstFireworkLineThree);
    Firework.push_back(firstFirework);

    Art secondFirework;
    lineOne = "`o`o`   ";
    lineTwo = "o`o`o`o ";
    lineThree = " `o`o`  ";
    vector<char> SecondFireworkLineOne(lineOne.begin(), lineOne.end());
    vector<char> SecondFireworkLineTwo(lineTwo.begin(), lineTwo.end());
    vector<char> SecondFireworkLineThree(lineThree.begin(), lineThree.end());
    secondFirework.push_back(SecondFireworkLineOne);
    secondFirework.push_back(SecondFireworkLineTwo);
    secondFirework.push_back(SecondFireworkLineThree);
    Firework.push_back(secondFirework);

    Art thirdFirework;
    lineOne = "  ^,^,^  ";
    lineTwo = "^,^,^,^,^";
    lineThree = "^,^,^,^,^";
    string lineFour = "  ^,^,^  ";
    vector<char> ThirdFireworkLineOne(lineOne.begin(), lineOne.end());
    vector<char> ThirdFireworkLineTwo(lineTwo.begin(), lineTwo.end());
    vector<char> ThirdFireworkLineThree(lineThree.begin(), lineThree.end());
    vector<char> ThirdFireworkLineFour(lineFour.begin(), lineFour.end());
    thirdFirework.push_back(ThirdFireworkLineOne);
    thirdFirework.push_back(ThirdFireworkLineTwo);
    thirdFirework.push_back(ThirdFireworkLineThree);
    thirdFirework.push_back(ThirdFireworkLineFour);
    Firework.push_back(thirdFirework);

    Art fourthFirework;
    lineOne = "  ~@~*~@~   ";
    lineTwo = "~*~@~*~@~*~ ";
    lineThree = "~*~@$#$@~*~ ";
    lineFour = "~*~@~*~@~*~ ";
    string lineFive = "  ~@~*~@~   ";
    vector<char> FourthFireworkLineOne(lineOne.begin(), lineOne.end());
    vector<char> FourthFireworkLineTwo(lineTwo.begin(), lineTwo.end());
    vector<char> FourthFireworkLineThree(lineThree.begin(), lineThree.end());
    vector<char> FourthFireworkLineFour(lineFour.begin(), lineFour.end());
    vector<char> FourthFireworkLineFive(lineFive.begin(), lineFive.end());
    fourthFirework.push_back(FourthFireworkLineOne);
    fourthFirework.push_back(FourthFireworkLineTwo);
    fourthFirework.push_back(FourthFireworkLineThree);
    fourthFirework.push_back(FourthFireworkLineFour);
    fourthFirework.push_back(FourthFireworkLineFive);
    Firework.push_back(fourthFirework);

    vector<char> temp;

    //TODO create an instance of the PixelBuffer.
    PixelBuffer buffer;
    //TODO create a container to store Renderers.
    vector<Renderer*> renderers;
    //TODO add 3 instances of SolidColor renderers to the container with renderers.
    //   Use the following colors:
    //   Pixel::Color::WHITE, Pixel::Color::CYAN, Pixel::Color::MAGENTA
    SolidColor* whiteRender = new SolidColor(Pixel::Color::WHITE);
    SolidColor* cyanRender = new SolidColor(Pixel::Color::CYAN);
    SolidColor* magentaRender = new SolidColor(Pixel::Color::MAGENTA);
    renderers.push_back(whiteRender);
    renderers.push_back(cyanRender);
    renderers.push_back(magentaRender);
    //TODO add 2 instances of RandomColor renderers to the container with renderers.
    RandomColor* randomColorOne = new RandomColor;
    RandomColor* randomColorTwo = new RandomColor;
    renderers.push_back(randomColorOne);
    renderers.push_back(randomColorTwo);
    //TODO implement the user loop
    bool loop = true;
    string input;
    cout << "Do you want to see fireworks? (y|n)";
    cin >> input;
    do {
        if(input == "y" || input == "Y")
        {
            buffer.init();
            for(int n = 0; n < randNum(); n++)
            {
                std::array<size_t, 2> pos = buffer.random_pos();
                int randFireworkIndex = randFirework();
                Art firework = Firework.at(randFireworkIndex);
                int randFireworkColor = randColor();
                Renderer* randColor = renderers.at(randFireworkColor);
                randColor->render(firework, buffer);
            }
            buffer.render();
            cout << "Do you want to see fireworks? (y|n)";
            cin >> input;
            if(input == "n" || input == "N")
            {
                loop = false;
            }
            else if(input == "y" || input == "Y")
            {
                continue;
            }
            else
            {
                cout << "You did not choose a valid option, please try again" << endl;
                cout << "Do you want to see fireworks? (y|n)";
                cin >> input;
            }
        }
        else if (input == "n" || input == "N")
        {
            return 0;
        }
        else
        {
            cout << "You did not choose a valid option, please try again" << endl;
            cout << "Do you want to see fireworks? (y|n)";
            cin >> input;
        }
    }while(loop);
    //TODO cleanup whatever is needed
    for(auto & renderer : renderers)
    {
        delete renderer;
    }
    return 0;
}