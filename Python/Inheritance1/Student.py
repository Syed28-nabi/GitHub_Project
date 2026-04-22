# Class Student
class Student:
    def __init__(self, sid, deptid):
        self.sid = sid
        self.deptid = deptid

    def get_info(self):
        return f"StudentID:{self.sid} DepartmentID:{self.deptid}"
        #return "StudentID:", self.sid, "DepartmentID:" , self.deptid


# Class Faculty
class Faculty:
    def __init__(self, eid, deptid):
        self.eid = eid
        self.deptid = deptid

    def get_info(self):
        return f"EmployeeID:{self.eid} DepartmentID:{self.deptid}"


# Multiple Inheritance
class PhDStudent(Student, Faculty):
    def __init__(self, sid, eid, deptid):
        
        Student.__init__(self, sid, deptid)
        Faculty.__init__(self, eid, deptid)

    def get_info(self):
        return f"StudentID:{self.sid} EmployeeID:{self.eid} DepartmentID:{self.deptid}"

# Object creation
s = Student(101, 42)
f = Faculty(555, 42)
p = PhDStudent(101, 555, 42)

print(s.get_info())
print(f.get_info())
print(p.get_info())