class Student:
    def __init__(self,name,age,score):
        self.name = name
        self.age = age
        self.score = score
    def training(self):
        self.age += 1
        self.score += self.score * 0.2
        if self.score > 600:
            self.score = 600
        return self

n = int(input())
students = []

for _ in range(n):
    arr = input().split()
    name = arr[0]
    age = int(arr[1])
    score = int(arr[2])
    students.append(Student(name, age, score))


for student in students:
    updated_student = student.training()
    print(f"{updated_student.name} {updated_student.age} {updated_student.score}")
