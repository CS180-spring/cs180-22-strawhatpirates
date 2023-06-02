#include "../header/Student.h"
#include "../header/Professor.h"
#include "../header/JsonInterface.h"

#include "gtest/gtest.h"
#include <iostream>

using namespace std;

// PERSON TEST ---------------------------------------------
TEST(personTest, getFirstName) {
    Person *person = new Person("John", "Smith");
    string expected = "John";

    EXPECT_EQ(person->getFirstName(), expected);
}

TEST(personTest, getLastName) {
    Person *person = new Person("John", "Smith");
    string expected = "Smith";

    EXPECT_EQ(person->getLastName(), expected);
}

TEST(personTest, getName) {
    Person *person = new Person("John", "Smith");
    string expected = "John Smith";

    EXPECT_EQ(person->getName(), expected);
}

TEST(personTest, firstNameIsValid) {
    Person person;
    string input1 = "John";
    string input2 = "john";
    string input3 = "5421.2";

    EXPECT_TRUE(person.firstNameIsValid(input1));
    EXPECT_FALSE(person.firstNameIsValid(input2));
    EXPECT_FALSE(person.firstNameIsValid(input3));
}

TEST(personTest, lastNameIsValid) {
    Person person;
    string input1 = "John";
    string input2 = "john";
    string input3 = "5421.2";

    EXPECT_TRUE(person.lastNameIsValid(input1));
    EXPECT_FALSE(person.lastNameIsValid(input2));
    EXPECT_FALSE(person.lastNameIsValid(input3));
}

TEST(personTest, nameIsValid) {
    Person person;
    string input1 = "John", input11 = "Smith";
    string input2 = "john", input22 = "Smith";
    string input3 = "5421.2", input33 = "Jwon Tims";

    EXPECT_TRUE(person.nameIsValid(input1, input11));
    EXPECT_FALSE(person.nameIsValid(input2, input22));
    EXPECT_FALSE(person.nameIsValid(input3, input33));
}

// STUDENT TEST ---------------------------------------------
TEST(studentTest, getName) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "Jane Doe";

    EXPECT_EQ(student->getName(), expected);
}

TEST(studentTest, getGPA) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "3.7";

    EXPECT_EQ(student->getGPA(), expected);
}

TEST(studentTest, getSID) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "123456789";

    EXPECT_EQ(student->getSID(), expected);
}

TEST(studentTest, getYearNumber) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "3";

    EXPECT_EQ(student->getYearNumber(), expected);
}

TEST(studentTest, getMajor) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "CS";

    EXPECT_EQ(student->getMajor(), expected);
}

TEST(studentTest, changeName) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "Jane Dell";
    student->changeName("Jane", "Dell");

    EXPECT_EQ(student->getName(), expected);
}

TEST(studentTest, changeGPA) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "3.6";
    student->changeGPA("3.6");

    EXPECT_EQ(student->getGPA(), expected);
}

TEST(studentTest, changeSID) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "987654321";
    student->changeSID("987654321");

    EXPECT_EQ(student->getSID(), expected);
}

TEST(studentTest, changeYearNumber) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "2";
    student->changeYearNumber("2");

    EXPECT_EQ(student->getYearNumber(), expected);
}

TEST(studentTest, changeMajor) {
    Student *student = new Student("Jane", "Doe",  "3.7", "CS", "123456789", "3");
    string expected = "EE";
    student->changeMajor("EE");

    EXPECT_EQ(student->getMajor(), expected);
}

TEST(studentTest, GPAIsValid) {
    Student stu;
    string input1 = "3.00";
    string input2 = "5.00";
    string input3 = "rewqr";

    EXPECT_TRUE(stu.GPAIsValid(input1));
    EXPECT_FALSE(stu.GPAIsValid(input2));
    EXPECT_FALSE(stu.GPAIsValid(input3));
}

TEST(studentTest, SIDIsValid) {
    Student stu;
    string input1 = "123456789";
    string input2 = "5.00";
    string input3 = "rewqr";

    EXPECT_TRUE(stu.SIDIsValid(input1));
    EXPECT_FALSE(stu.SIDIsValid(input2));
    EXPECT_FALSE(stu.SIDIsValid(input3));
}

TEST(studentTest, yearNumberIsValid) {
    Student stu;
    string input1 = "3";
    string input2 = "5.00";
    string input3 = "rewqr";

    EXPECT_TRUE(stu.yearNumberIsValid(input1));
    EXPECT_FALSE(stu.yearNumberIsValid(input2));
    EXPECT_FALSE(stu.yearNumberIsValid(input3));
}

TEST(studentTest, majorIsValid) {
    Student stu;
    string input1 = "CS";
    string input2 = "5.00";
    string input3 = "Computer Science";
    string input4 = "cs";

    EXPECT_TRUE(stu.majorIsValid(input1));
    EXPECT_FALSE(stu.majorIsValid(input2));
    EXPECT_FALSE(stu.majorIsValid(input3));
    EXPECT_FALSE(stu.majorIsValid(input4));
}

// PROFESSOR TEST ---------------------------------------------
TEST(professorTest, getName) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track", "973481116");
    string expected = "John Dwill";

    EXPECT_EQ(professor->getName(), expected);
}

TEST(professorTest, getDepartment) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track", "973481216");
    string expected = "Computer Science & Engineer";

    EXPECT_EQ(professor->getDepartment(), expected);
}

TEST(professorTest, getRank) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track", "973481128");
    string expected = "Tenure-Track";

    EXPECT_EQ(professor->getRank(), expected);
}

TEST(professorTest, changeName) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track", "973431516");
    string expected = "John Dwayne";
    professor->changeName("John", "Dwayne");

    EXPECT_EQ(professor->getName(), expected);
}

TEST(professorTest, changeDepartment) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track", "973285126");
    string expected = "Material Science & Engineering";
    professor->changeDepartment("Material Science & Engineering");

    EXPECT_EQ(professor->getDepartment(), expected);
}

TEST(professorTest, changeRank) {
    Professor *professor = new Professor("John", "Dwill", "Computer Science & Engineer", "Tenure-Track", "973451186");
    string expected = "Advocacy Faculty";
    professor->changeRank("Advocacy Faculty");

    EXPECT_EQ(professor->getRank(), expected);
}

TEST(professorTest, departmentIsValid) {
    Professor prof;
    string input1 = "Computer Science and Engineering";
    string input2 = "5.00";
    string input3 = "c";

    EXPECT_TRUE(prof.departmentIsValid(input1));
    EXPECT_FALSE(prof.departmentIsValid(input2));
    EXPECT_FALSE(prof.departmentIsValid(input3));
}

TEST(professorTest, rankIsValid) {
    Professor prof;
    string input1 = "Tenure-Track";
    string input2 = "5.00";
    string input3 = "Ten32ure-Track";

    EXPECT_TRUE(prof.rankIsValid(input1));
    EXPECT_FALSE(prof.rankIsValid(input2));
    EXPECT_FALSE(prof.rankIsValid(input3));
}

// JsonInterface TEST ---------------------------------------------
TEST(jsonInterfaceTest, getMode) {
    JsonInterface *jsi = new JsonInterface();

    EXPECT_TRUE(jsi->getMode());
}

TEST(jsonInterfaceTest, changeMode) {
    JsonInterface *jsi = new JsonInterface();

    EXPECT_TRUE(jsi->getMode());
    jsi->changeMode();
    EXPECT_FALSE(jsi->getMode());
    jsi->changeMode();
    EXPECT_TRUE(jsi->getMode());
}

// MAIN ---------------------------------------------
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}