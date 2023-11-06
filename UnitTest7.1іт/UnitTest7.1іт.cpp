#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>
#include "../lab7.1it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71іт
{
    TEST_CLASS(UnitTest71іт)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            
            int rowCount = 3;
            int colCount = 4;
            int** r = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
                r[i] = new int[colCount];

            
            r[0][0] = 3; r[0][1] = 5; r[0][2] = 1; r[0][3] = 9;
            r[1][0] = 2; r[1][1] = 5; r[1][2] = 7; r[1][3] = 6;
            r[2][0] = 4; r[2][1] = 5; r[2][2] = 3; r[2][3] = 8;

        
            int expected_result[3][4] = {
                {4, 5, 3, 8},
                {3, 5, 1, 9},
                {2, 5, 7, 6}
            };

            Sort(r, rowCount, colCount);

            
            for (int i = 0; i < rowCount; i++) {
                for (int j = 0; j < colCount; j++) {
                Assert:(expected_result[i][j], r[i][j]);
                }
            }
        }
    } ;
}
