#include "../header/Student.h"
#include "../header/Professor.h"

#include "gtest/gtest.h"
#include <iostream>

using namespace std;

TEST(studentTest, getName) {
    Student *student = new Student("Jane Doe", "3.7", "123456789", "3", "CS");
    string expected = "Jane Doe";

    EXPECT_EQ(student->getName(), expected);
}

TEST(studentTest, getGPA) {
    Student *student = new Student("Jane Doe", "3.7", "123456789", "3", "CS");
    string expected = "3.7";

    EXPECT_EQ(student->getGPA(), expected);
}

TEST(studentTest, getSID) {
    Student *student = new Student("Jane Doe", "3.7", "123456789", "3", "CS");
    string expected = "123456789";

    EXPECT_EQ(student->getSID(), expected);
}

TEST(studentTest, getYearNumber) {
    Student *student = new Student("Jane Doe", "3.7", "123456789", "3", "CS");
    string expected = "3";

    EXPECT_EQ(student->getYearNumber(), expected);
}

TEST(studentTest, getMajor) {
    Student *student = new Student("Jane Doe", "3.7", "123456789", "3", "CS");
    string expected = "CS";

    EXPECT_EQ(student->getMajor(), expected);
}

TEST(professorTest, getName) {
    Professor *professor = new Professor("John Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "John Dwill";

    EXPECT_EQ(professor->getName(), expected);
}

TEST(professorTest, getDepartment) {
    Professor *professor = new Professor("John Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "Computer Science & Engineer";

    EXPECT_EQ(professor->getDepartment(), expected);
}

TEST(professorTest, getRank) {
    Professor *professor = new Professor("John Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "Tenure-Track";

    EXPECT_EQ(professor->getRank(), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}