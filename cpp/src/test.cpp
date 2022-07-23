#include <gtest/gtest.h>
#include "lib.hpp"

using namespace lib;

TEST(TEST_1, test1) 
{  
    dyn_array<int> arr;
}

/*
TEST(TEST_1_2, test1_2)
{
    dyn_array<int> arr;
     arr.push_back(5);
     EXPECT_EQ(arr.size(), 1);
}

/*
TEST(TEST_2, test2) 
{
    dyn_array<int> arr;
    arr.push_back(5).push_back(4).push_back(3).push_back(2);
    EXPECT_EQ(arr.size(), 4);
    EXPECT_EQ(arr[2], 3);
    arr += 6;
    EXPECT_EQ(arr[4], 6);
}
/*
TEST(TEST_3, test3)
{
    dyn_array<int> arr = { 5, 4, 3, 2 };
    EXPECT_EQ(arr.size(), 4);
}
/*
TEST(TEST_2_2, test2_2)
{
    const  dyn_array<int> arr = { 5, 4, 3, 2 };
   
    EXPECT_EQ(arr.size(), 4);
    EXPECT_EQ(arr[0], 5);


}
/*
TEST(TEST_4, test4) 
{
    dyn_array<int> arr, arr2;
    arr.push_back(5).push_back(4).push_back(3).push_back(2);
    arr2 = arr;                     //operator=
    EXPECT_EQ(arr2.size(), 4);
    EXPECT_EQ(arr2[2], 3);
    
    dyn_array<int> arr3(arr);       //copy constructor
    EXPECT_EQ(arr2.size(), 4);
    EXPECT_EQ(arr2[2], 3);
}


/*
 TEST(TEST_5, test4)
{
    dyn_array<int> arr = { 5, 4, 3, 2};
    dyn_array<int> arr2 = std::move(arr); //move constructor  same as arr2(std::move(arr))
    
    EXPECT_EQ(arr.size(), 0);
    EXPECT_EQ(arr2.size(), 4);
    EXPECT_EQ(arr2[2], 3);
    
    dyn_array<int> arr3;
    arr3 = std::move(arr2);    // move operator=
    
    EXPECT_EQ(arr2.size(), 0);
    EXPECT_EQ(arr3.size(), 4);
    EXPECT_EQ(arr3[2], 3);
}
*/