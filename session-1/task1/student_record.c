/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(struct student_record student) {
    // TODO: Implement this function to calculate and return the average
    // of the three module marks
    float total = 0;
    for(int i=0; i<3; i++) {
        total += student.marks[i];
    }

    float average = total / 3;
    
    return average; // Placeholder return value
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(struct student_record student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    printf("Name: %s\nID: %d\n", student.name, student.id);

    for(int i=0; i<3; i++) {
        printf("Marks For Module %d: %f\n", i, student.marks[i]);
    }
}

/*
 * main
 */
int main( void ) {
    // TODO: Create and initialise a student variable with sample data
    // Example: name = "John Smith", id = 12345, marks = {75.0, 68.5, 81.0}
    
    struct student_record student;
    strcpy(student.name, "John Smith");
    student.id = 2233;
    student.marks[0] = 75.0;
    student.marks[1] = 67.0;
    student.marks[2] = 81.0;
    
    // TODO: display the student data and average mark

    float finalAvg = calculate_average(student);
    display_student(student);
    printf("Average mark: %f\n", finalAvg);

    return 0;
}