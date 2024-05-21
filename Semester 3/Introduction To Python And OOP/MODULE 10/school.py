class School:
    def __init__(self, name, address):
        self.name = name
        self.address = address
        self.teachers = {}
        self.classrooms = {}

    def add_classroom(self, classroom):
        self.classrooms[classroom.name] = classroom

    def add_teacher(self, subject, teacher):
        self.teachers[subject] = teacher

    def student_admission(self, student):
        className=student.classroom.name
        self.classrooms[className].add_student(student)

    @staticmethod
    def calculate_grade(marks):
        if marks >= 90 and marks <= 100:
            return "A"
        elif marks >= 80 and marks <= 89:
            return "A-"
        elif marks >= 70 and marks <= 79:
            return "B+"
        elif marks >= 60 and marks <= 69:
            return "B-"
        elif marks >= 50 and marks <= 59:
            return "C"
        else:
            return "F"

    @staticmethod
    def grade_to_value(grade):
        grade_Mark = {
            "A": 4.00,
            "A-": 3.67,
            "B+": 3.33,
            "B-": 3.00,
            "C+": 2.67,
            "F": 0.00,
        }
        return grade_Mark[grade]

    @staticmethod
    def value_to_grade(value):
        if 3.67 < value <= 4:
            return "A"
        elif 3.33 < value <= 3.67:
            return "A-"
        elif 3.00 < value <= 3.33:
            return "B+"
        elif 2.67 < value <= 3.00:
            return "B-"
        elif value == 2.67:
            return "C+"
        else:
            return "F"

    def __repr__(self):
        for key, value in self.teachers.items():
            print(f"{key} : {value}")
        
        for key,value in self.classrooms.items():
            print(f"{key} : {value}")
