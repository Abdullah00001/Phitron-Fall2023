class Student:
    def __init__(self, name, id, semester):
        self.name = name
        self.id = id
        self.semester = semester

    def __repr__(self):
        return f"Student Name : {self.name}\nStudent Id : {self.id}\nSemester : {self.semester}"


class Teacher:
    def __init__(self, name, id, subject):
        self.name = name
        self.id = id
        self.subject = subject

    def __repr__(self):
        return f"Teacher Name : {self.name}\nTeacher Id : {self.id}\nSubject : {self.subject}"


class School:
    def __init__(self, name):
        self.name = name
        self.students = []
        self.teachers = []

    def addTeacher(self,name,subject):
        id=len(self.teachers)+100
        teacher=Teacher(name,id,subject)
        self.teachers.append(teacher)
    
    def addStudent(self,name,semester):
        id=len(self.students)+200
        student=Student(name,id,semester)
        self.students.append(student)
    
    def __repr__(self):
        