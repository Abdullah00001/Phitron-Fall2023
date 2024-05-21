from person import Student, Teacher
from school import School
from classroom import ClassRoom
from subject import Subject

school = School("NN high school", "Debiganj,panchagarh")
""" ADDING CLASSROOM """
seven = ClassRoom("seven")
eight = ClassRoom("eight")
nine = ClassRoom("nine")

school.add_classroom(seven)
school.add_classroom(eight)
school.add_classroom(nine)

""" ADDING STUDENT """

chablu = Student("chablu", seven)
diblu = Student("diblu", eight)
goblu = Student("goblu", nine)
kablu = Student("kablu", seven)
loblu = Student("loblu", eight)
moblu = Student("moblu", nine)
noblu = Student("noblu", seven)
pablu = Student("pablu", eight)
qablu = Student("qablu", nine)
rablu = Student("rablu", seven)

school.student_admission(chablu)
school.student_admission(diblu)
school.student_admission(goblu)
school.student_admission(kablu)
school.student_admission(loblu)
school.student_admission(moblu)
school.student_admission(noblu)
school.student_admission(pablu)
school.student_admission(qablu)
school.student_admission(rablu)

abul = Teacher("abul")
babul = Teacher("babul")
kabul = Teacher("kabul")

bangla = Subject("Bangla", abul)
english = Subject("English", babul)
math = Subject("Math", kabul)
science = Subject("Science", abul)

eight.add_subject(bangla)
eight.add_subject(english)
eight.add_subject(math)
eight.add_subject(science)

seven.add_subject(bangla)
seven.add_subject(english)
seven.add_subject(math)
seven.add_subject(science)

nine.add_subject(bangla)
nine.add_subject(english)
nine.add_subject(math)
nine.add_subject(science)

seven.take_semester_final()
eight.take_semester_final()
nine.take_semester_final()

print(school)