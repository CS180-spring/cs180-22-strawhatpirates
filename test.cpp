#include "Student.h"

#include "gtest/gtest.h"
#include <iostream>

TEST(studentTest, getName) {
    Student *student = new Student("Jane Doe", 3.7, 123456789, 3, "CS");
    string expected = "Jane Doe";

    EXPECT_EQ(student->getName(), expected);
}

TEST(studentTest, getGPA) {
    Student *student = new Student("Jane Doe", 3.7, 123456789, 3, "CS");
    double expected = 3.7;

    EXPECT_EQ(student->getGPA(), expected);
}

TEST(studentTest, getSID) {
    Student *student = new Student("Jane Doe", 3.7, 123456789, 3, "CS");
    int expected = 123456789;

    EXPECT_EQ(student->getSID(), expected);
}

TEST(studentTest, getYearNumber) {
    Student *student = new Student("Jane Doe", 3.7, 123456789, 3, "CS");
    int expected = 3;

    EXPECT_EQ(student->getYearNumber(), expected);
}

TEST(studentTest, getMajor) {
    Student *student = new Student("Jane Doe", 3.7, 123456789, 3, "CS");
    string expected = "CS";

    EXPECT_EQ(student->getMajor(), expected);
}