//
// Created by ethan on 10/21/2021.
//

#include "OtherFunctions.h"
#include "FirstFirework.h"
#include "SecondFirework.h"
#include "ThirdFirework.h"
#include "FourthFirework.h"
#include <random>
#include <array>
#include <iostream>
using namespace std;
enum Dimensions{rowSize = 20, colSize = 60, midpoint = 30, boundary = 19};
Dimensions row = rowSize;
Dimensions col = colSize;
Dimensions midPoint = midpoint;
Dimensions boundaryX = boundary;

/**
 * Creates a dynamically
 * allocated array with a
 * pass by reference parameter array
 * so other functions can access the
 * array
 * @param array
 */
char** arrayCreator()
{
    //Dynamically allocating row space in heap
    char** array = new char*[row];
    //Dynamically allocating column space in heap
    for(int i = 0; i < row; i++){
        array[i] = new char[col];
    }
    //Taking input in the array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            array[i][j] = ' ';
        }
    }
    return array;
}

/**
 * Creates two random number
 * and returns it
 * through pass by reference
 * @param x
 * @param y
 */
void randNum(int& x, int&y)
{
    random_device rdX;
    default_random_engine generatorX(rdX());
    uniform_int_distribution<int> distributionX(0,19);
    random_device rdY;
    default_random_engine generatorY(rdY());
    uniform_int_distribution<int> distributionY(0,59);
    x = distributionX(generatorX);
    y = distributionY(generatorY);
}

/**
 * Uses the FirstFirework class to
 * place in the first firework into
 * the dynamically allocated array
 * without going out of range
 * @param array
 */
void firstFireworkBuffer(char**& array)
{
    firstFirework firstFirework;
    firstFirework.lines();
    int indexX = 0;
    int indexY = 0;
    int traceX;
    int traceY;
    randNum(indexX, indexY);
    int tempNum = indexY;
    for(int i = 0; i < firstFirework.GetVectorSizeRow(); i++)
    {
        for(int j = 0; j < firstFirework.GetVectorSizeCol(); j++)
        {
            char temp = firstFirework.GetVectorAt(i, j);
            if(indexX > boundaryX || indexY > col)
            {
                break;
            }
            else
            {
                array[indexX][indexY] = temp;
                indexY = indexY + 1;
            }
        }
        indexY = tempNum;
        indexX = indexX + 1;
    }
    traceX = indexX;
    traceY = indexY;
    if(traceY > midPoint)
    {
        traceY = traceY + (firstFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '/';
                }
            }
            traceX = traceX + 1;
            traceY = traceY - 1;
        }
    }
    else if(traceY < midPoint)
    {
        traceY = traceY + (firstFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '\\';
                }
            }
            traceX = traceX + 1;
            traceY = traceY + 1;
        }
    }
    else if(traceY == midPoint)
    {
        traceY = traceY + (firstFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '|';
                }
            }
            traceX = traceX + 1;
        }
    }
}

/**
 * Uses the SecondFirework class to
 * place in the second firework into
 * the dynamically allocated array
 * without going out of range
 * @param array
 */
void secondFireworkBuffer(char**& array)
{
    int indexX = 0;
    int indexY = 0;
    int traceX;
    int traceY;
    secondFirework secondFirework;
    secondFirework.lines();
    randNum(indexX, indexY);
    int tempNum = indexY;
    for(int i = 0; i < secondFirework.GetVectorSizeRow(); i++)
    {
        for(int j = 0; j < secondFirework.GetVectorSizeCol(); j++)
        {
            char temp = secondFirework.GetVectorAt(i, j);
            if(indexX > boundaryX || indexY > col)
            {
                break;
            }
            else
            {
                array[indexX][indexY] = temp;
                indexY = indexY + 1;
            }
        }
        indexY = tempNum;
        indexX = indexX + 1;
    }
    traceX = indexX;
    traceY = indexY;
    if(traceY >= midPoint)
    {
        traceY = traceY + (secondFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '/';
                }
            }
            traceX = traceX + 1;
            traceY = traceY - 1;
        }
    }
    else if(traceY < midPoint)
    {
        traceY = traceY + (secondFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '\\';
                }
            }
            traceX = traceX + 1;
            traceY = traceY + 1;
        }
    }
    else if(traceY == midPoint)
    {
        traceY = traceY + (secondFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '|';
                }
            }
            traceX = traceX + 1;
        }
    }
}

/**
 * Uses the ThirdFirework class to
 * place in the third firework into
 * the dynamically allocated array
 * without going out of range
 * @param array
 */
void thirdFireworkBuffer(char**& array)
{
    int indexX = 0;
    int indexY = 0;
    int traceX;
    int traceY;
    thirdFirework thirdFirework;
    thirdFirework.lines();
    randNum(indexX, indexY);
    int tempNum = indexY;
    for(int i = 0; i < thirdFirework.GetVectorSizeRow(); i++)
    {
        for(int j = 0; j < thirdFirework.GetVectorSizeCol(); j++)
        {
            char temp = thirdFirework.GetVectorAt(i, j);
            if(indexX > boundaryX || indexY > col)
            {
                break;
            }
            else
            {
                array[indexX][indexY] = temp;
                indexY = indexY + 1;
            }
        }
        indexY = tempNum;
        indexX = indexX + 1;
    }
    traceX = indexX;
    traceY = indexY;
    if(traceY >= midPoint)
    {
        traceY = traceY + (thirdFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '/';
                }
            }
            traceX = traceX + 1;
            traceY = traceY - 1;
        }
    }
    else if(traceY < midPoint)
    {
        traceY = traceY + (thirdFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '\\';
                }
            }
            traceX = traceX + 1;
            traceY = traceY + 1;
        }
    }
    else if(traceY == midPoint)
    {
        traceY = traceY + (thirdFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '|';
                }
            }
            traceX = traceX + 1;
        }
    }
}

/**
 * Uses the FourthFirework class to
 * place in the fourth firework into
 * the dynamically allocated array
 * without going out of range
 * @param array
 */
void fourthFireworkBuffer(char**& array)
{
    int indexX = 0;
    int indexY = 0;
    int traceX;
    int traceY;
    fourthFirework fourthFirework;
    fourthFirework.lines();
    randNum(indexX, indexY);
    int tempNum = indexY;
    for(int i = 0; i < fourthFirework.GetVectorSizeRow(); i++)
    {
        for(int j = 0; j < fourthFirework.GetVectorSizeCol(); j++)
        {
            char temp = fourthFirework.GetVectorAt(i, j);
            if(indexX > boundaryX || indexY > col)
            {
                break;
            }
            else
            {
                array[indexX][indexY] = temp;
                indexY = indexY + 1;
            }
        }
        indexY = tempNum;
        indexX = indexX + 1;
    }
    traceX = indexX;
    traceY = indexY;
    if(traceY >= midPoint)
    {
        traceY = traceY + (fourthFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '/';
                }
            }
            traceX = traceX + 1;
            traceY = traceY - 1;
        }
    }
    else if(traceY < midPoint)
    {
        traceY = traceY + (fourthFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '\\';
                }
            }
            traceX = traceX + 1;
            traceY = traceY + 1;
        }
    }
    else if(traceY == midPoint)
    {
        traceY = traceY + (fourthFirework.GetVectorSizeCol()/2);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(traceX > boundaryX || traceY > col)
                {
                    break;
                }
                else
                {
                    array[traceX][traceY] = '|';
                }
            }
            traceX = traceX + 1;
        }
    }
}

/**
 * Displays the dynamically
 * allocated array and deletes it
 * to free up memory
 * @param array
 */
void arrayDisplayAndDeallocate(char**& array)
{
    cout << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << array[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i < row; i++)
    {
        delete [] array[i];
    }
    delete [] array;
}