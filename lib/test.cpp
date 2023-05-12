#include "../header/Student.h"
#include "../header/Professor.h"

#include "gtest/gtest.h"
#include <iostream>

using namespace std;

// STUDENT TEST ---------------------------------------------
TEST(studentTest, getName) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "Jane Doe";

    EXPECT_EQ(student->getName(), expected);
}

TEST(studentTest, getGPA) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "3.7";

    EXPECT_EQ(student->getGPA(), expected);
}

TEST(studentTest, getSID) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "123456789";

    EXPECT_EQ(student->getSID(), expected);
}

TEST(studentTest, getYearNumber) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "3";

    EXPECT_EQ(student->getYearNumber(), expected);
}

TEST(studentTest, getMajor) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "CS";

    EXPECT_EQ(student->getMajor(), expected);
}

TEST(studentTest, changeName) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "Jane Dell";
    student->changeName("Jane", "Dell");

    EXPECT_EQ(student->getName(), expected);
}

TEST(studentTest, changeGPA) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "3.6";
    student->changeGPA("3.6");

    EXPECT_EQ(student->getGPA(), expected);
}

TEST(studentTest, changeSID) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "987654321";
    student->changeSID("987654321");

    EXPECT_EQ(student->getSID(), expected);
}

TEST(studentTest, changeYearNumber) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "2";
    student->changeYearNumber("2");

    EXPECT_EQ(student->getYearNumber(), expected);
}

TEST(studentTest, changeMajor) {
    Student *student = new Student("Jane", "Doe", "3.7", "123456789", "3", "CS");
    string expected = "EE";
    student->changeMajor("EE");

    EXPECT_EQ(student->getMajor(), expected);
}

// PROFESSOR TEST ---------------------------------------------
TEST(professorTest, getName) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "John Dwill";

    EXPECT_EQ(professor->getName(), expected);
}

TEST(professorTest, getDepartment) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "Computer Science & Engineer";

    EXPECT_EQ(professor->getDepartment(), expected);
}

TEST(professorTest, getRank) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "Tenure-Track";

    EXPECT_EQ(professor->getRank(), expected);
}

TEST(professorTest, changeName) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "John Dwayne";
    professor->changeName("John", "Dwayne");

    EXPECT_EQ(professor->getName(), expected);
}

TEST(professorTest, changeDepartment) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "Material Science & Engineering";
    professor->changeDepartment("Material Science & Engineering");

    EXPECT_EQ(professor->getDepartment(), expected);
}

TEST(professorTest, changeRank) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track");
    string expected = "Advocacy Faculty";
    professor->changeRank("Advocacy Faculty");

    EXPECT_EQ(professor->getRank(), expected);
}

// MAIN ---------------------------------------------
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}